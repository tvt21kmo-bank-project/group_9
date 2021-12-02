const db = require('../database');

const saldo = {
    getById: function(id, callback) {
      return db.query('select * from bank_account where id_borrower=?', [id], callback);
    },
    getAll: function(callback) {
      return db.query('select * from bank_account', callback);
    },
};
module.exports = saldo;