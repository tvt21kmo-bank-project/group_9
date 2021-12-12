const db = require('../database');

const saldo = {
    getById: function(id, callback) {
      return db.query('select Etunimi,Sukunimi,Tilinumero,Saldo, PVM, Tapahtuma, Summa from kayttaja JOIN asiakas on asiakas.idAsiakas=kayttaja.idAsiakas JOIN tilit on kayttaja.idTilit=tilit.idTilit JOIN tilitapahtumat on tilit.Tilinumero=tilitapahtumat.Tili where kayttajatunnus=? limit 5;', [id], callback);
    },
    getAll: function(callback) {
      return db.query('select Tilinumero,Saldo from tilit', callback);
    },
};
module.exports = saldo;