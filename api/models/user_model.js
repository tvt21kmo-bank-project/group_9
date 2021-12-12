const db = require('../database');
const bcrypt = require('bcryptjs');

const saltRounds=10;
const user={
  get: function(callback) {
    return db.query('select * from asiakas', callback);
  },
  getById: function(id, callback) {
    return db.query('select * from asiakas where idAsiakas=?', [id], callback);
  },
  add: function(user, callback) { //asiakkaan tunnuksen + salasanan lisääminen. Käytä postmanissa "username", "password", "id1" =idTilit ja "id2" =idAsiakas
    bcrypt.hash(user.password, saltRounds, function(err, hash) {
      return db.query('insert into kayttaja (kayttajatunnus, salasana) values(?,?)',
      [user.username, hash], callback);
    });
  },

  delete: function(id, callback) {
    return db.query('delete from asiakas where id_user=?', [id], callback);
  },
  update: function(id, user, callback) {
    bcrypt.hash(user.password, saltRounds, function(err, hash) {
      return db.query('update asiakas set kayttajatunnus=?, salana=? where idAsiakas=?',
      [user.username, hash, id], callback);
    });
  }

}
          
module.exports = user;