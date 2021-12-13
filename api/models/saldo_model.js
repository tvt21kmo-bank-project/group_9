const db = require('../database');

const saldo = {
    getById: function(id, callback) {
      return db.query('select Etunimi,Sukunimi,Tilinumero,Saldo from kayttaja JOIN asiakas on asiakas.idAsiakas=kayttaja.idAsiakas JOIN tilit on kayttaja.idTilit=tilit.idTilit where kayttajatunnus=?;', [id], callback);
    },
    getAll: function(callback) {
      return db.query('select Etunimi,Sukunimi,Tilinumero,Saldo from kayttaja JOIN asiakas on asiakas.idAsiakas=kayttaja.idAsiakas JOIN tilit on kayttaja.idTilit=tilit.idTilit', callback);
    },
};
module.exports = saldo;