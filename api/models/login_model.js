const db = require('../database');

const login={
  getById: function(id, callback) {
    return db.query('select etunimi, sukunimi, kayttajatunnus, tilinumero from asiakas join kayttaja on asiakas.idAsiakas = kayttaja.idAsiakas join tilit on kayttaja.idTilit = tilit.idTilit where kayttajatunnus = ?', [id], callback);
  },

  checkPassword: function(Kayttajatunnus, callback) {
      return db.query('SELECT Salasana FROM kayttaja WHERE Kayttajatunnus = ?',
      [Kayttajatunnus], callback); 
    }
};
          
module.exports = login;