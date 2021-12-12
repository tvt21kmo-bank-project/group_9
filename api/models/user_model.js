const db = require('../database');
const bcrypt = require('bcryptjs');

const saltRounds=10;
const user={

  get: function(callback) {
    return db.query('select * from kayttaja', callback);
  },

  getById: function(id, callback) {
    return db.query('select * from kayttaja where idAsiakas=?', [id], callback);
  },

  add: function(user, callback) { 
    bcrypt.hash(user.Salasana, saltRounds, function(err, hash) {
      return db.query('insert into kayttaja (Kayttajatunnus, Salasana, idTilit, idAsiakas) values(?,?,?,?)',
      [user.Kayttajatunnus, hash, user.idTilit, user.idAsiakas], callback);
    });
  },

  delete: function(id, callback) {
    return db.query('delete from kayttaja where idAsiakas=?', [id], callback);
  },

  update: function(id, user, callback) {
    bcrypt.hash(user.Salasana, saltRounds, function(err, hash) {
      return db.query('update kayttaja set Kayttajatunnus=?, Salasana=?, idTilit=?, idAsiakas=? where idAsiakas=?',
      [user.Kayttajatunnus, hash, user.idTilit, user.idAsiakas, id], callback);
    });
  }

}
          
module.exports = user;