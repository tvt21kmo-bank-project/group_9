const express = require('express');
const tapahtumat = require('../models/tapahtumat_model');
const router = express.Router();

router.get('/:id?',
 function(request, response) {
  if (request.params.id) {
    tapahtumat.getById(request.params.id, function(err, dbResult) {
      if (err) {
        response.json(err);
      } else {
        response.json(dbResult);
      }
    });
  } else {
    tapahtumat.getAll(function(err, dbResult) {
      if (err) {
        response.json(err);
      } else {
        response.json(dbResult);
      }
    });
  }
});

module.exports = router;