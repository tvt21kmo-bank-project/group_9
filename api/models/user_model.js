const db = require('../database');
const bcrypt = require('bcryptjs');

const saltRounds=10;
const user={
<<<<<<< HEAD
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
=======

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
>>>>>>> 1fb0d98c09fa630ef8eae5be7b09b1a716c18b03
    });
  },

  delete: function(id, callback) {
<<<<<<< HEAD
    return db.query('delete from asiakas where id_user=?', [id], callback);
  },
  update: function(id, user, callback) {
    bcrypt.hash(user.password, saltRounds, function(err, hash) {
      return db.query('update asiakas set kayttajatunnus=?, salana=? where idAsiakas=?',
      [user.username, hash, id], callback);
=======
    return db.query('delete from kayttaja where idAsiakas=?', [id], callback);
  },

  update: function(id, user, callback) {
    bcrypt.hash(user.Salasana, saltRounds, function(err, hash) {
      return db.query('update kayttaja set Kayttajatunnus=?, Salasana=?, idTilit=?, idAsiakas=? where idAsiakas=?',
      [user.Kayttajatunnus, hash, user.idTilit, user.idAsiakas, id], callback);
>>>>>>> 1fb0d98c09fa630ef8eae5be7b09b1a716c18b03
    });
  }

}
          
module.exports = user;