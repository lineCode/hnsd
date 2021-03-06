#include "config.h"

#include <assert.h>
#include <stdint.h>

#include "error.h"

static const char *errstrs[] = {
  "ESUCCESS",
  "ENOMEM",
  "ETIMEOUT",
  "EFAILURE",
  "EBADARGS",
  "EENCODING",
  "EHASHMISMATCH",
  "ESAMEKEY",
  "ESAMEPATH",
  "ENEGDEPTH",
  "EPATHMISMATCH",
  "ETOODEEP",
  "EUNKNOWNERROR",
  "EMALFORMEDNODE",
  "EINVALIDNODE",
  "EEARLYEND",
  "ENORESULT",
  "EUNEXPECTEDNODE",
  "ERECORDMISMATCH",
  "EPOWPROOFSIZE",
  "EPOWTOOBIG",
  "EPOWTOOSMALL",
  "EPOWNONMATCHING",
  "EPOWBRANCH",
  "EPOWDEADEND",
  "EPOWSHORTCYCLE",
  "ENEGTARGET",
  "EHIGHHASH",
  "ETIMETOONEW",
  "EDUPLICATE",
  "EDIPLICATEORPHAN",
  "ETIMETOOOLD",
  "EBADDDIFFBITS",
  "EORPHAN",
  "EACTONE",
  "EACTTWO",
  "EACTTHREE",
  "EBADSIZE",
  "EBADTAG",
  "EUNKNOWN"
};

const char *
hsk_strerror(int code) {
  if (code < 0 || code > HSK_MAXERROR)
    return errstrs[HSK_MAXERROR];
  return errstrs[code];
}
