const db = require('../database');

const tapahtumat = {
    getById: function(id, callback) {
      return db.query('select * from tilitapahtumat JOIN tilit on tilitapahtumat.tili=tilit.Tilinumero JOIN kayttaja on tilit.idTilit=kayttaja.idTilit where kayttajatunnus=?;', [id], callback);
    },
    getAll: function(callback) {
      return db.query('select * from tilitapahtumat', callback);
    },
};
module.exports = tapahtumat;