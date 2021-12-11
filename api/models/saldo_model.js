const db = require('../database');

const saldo = {
    getById: function(id, callback) {
      return db.query('select Tilinumero,Saldo from tilit where idAsiakas=?', [id], callback);
    },
    getAll: function(callback) {
      return db.query('select Tilinumero,Saldo from tilit', callback);
    },
};
module.exports = saldo;