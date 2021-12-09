
const express = require('express');
const router = express.Router();
const user = require('../models/user_model');

router.get('/:id?', //kaikkien käyttäjien hakeminen
 function(request, response) {
  if (request.params.id) {
    user.getById(request.params.id, function(err, dbResult) { //käyttäjän haku idAsiakas avulla
      if (err) {
        response.json(err);
      } else {
        response.json(dbResult);
      }
    });
  } else {
    user.get(function(err, dbResult) {
      if (err) {
        response.json(err);
      } else {
        response.json(dbResult);
      }
    });
  }
});
router.post('/', //käyttäjän lisääminen
function(request, response) {
  user.add(request.body, function(err, count) {
    if (err) {
      response.json(err);
    } else {
      response.json(request.body); 
    }
  });
});

router.delete('/:id', //käyttäjän poistaminen
function(request, response) {
  user.delete(request.params.id, function(err, count) {
    if (err) {
      response.json(err);
    } else {
      response.json(count);
    }
  });
});


router.put('/:id', //käyttäjän muokkaaminen
function(request, response) {
  user.update(request.params.id, request.body, function(err, dbResult) {
    if (err) {
      response.json(err);
    } else {
      response.json(dbResult);
    }
  });
});

module.exports = router;