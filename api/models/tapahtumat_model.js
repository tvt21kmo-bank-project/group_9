const db = require('../database');

const tapahtumat = {
    getById: function(id, callback) {
      return db.query('select tili, PVM, Tapahtuma, Summa from tilitapahtumat JOIN tilit on tilitapahtumat.tili=tilit.Tilinumero JOIN kayttaja on tilit.idTilit=kayttaja.idTilit where kayttajatunnus=? limit 10;', [id], callback);
    },
    getAll: function(callback) {
      return db.query('select tili, PVM, Tapahtuma, Summa from tilitapahtumat', callback);
    },
};
module.exports = tapahtumat;