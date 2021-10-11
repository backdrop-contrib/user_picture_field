# User picture field

This module allows you add an image field to user accounts and show it on the
user registration form. After a user registers an account, this module will use
the file that was uploaded to the image field as the user's picture.

## Installation

- Install this module using the
  [official Backdrop CMS instructions](https://backdropcms.org/guide/modules).

## Usage:

1. Add an image field to user, for example `field_user_avatar`

2. Configure this field, and make it show on user register form. (Special note
   about "default image" values:
   [Issue 4](https://github.com/backdrop-contrib/user_picture_field/issues/4)))

3. Install this module, navigate to **admin/config/people/user_picture_field**
   to configure the "Machine name of source field to be used as user picture"

4. If a user uploads an image through the image field you created, it will be
   used as their picture (avatar).

Please also view and contribute to the
[Wiki](https://github.com/backdrop-contrib/user_picture_field/wiki) for further
instructions.

### Profile:

This module should support the Profile module, although testing and feedback
would be appreciated.

You must configure the 'Machine name of source bundle' and 'Machine name of
source field to be used as user picture'.

## Issues

 - Bugs and Feature requests should be reported in the
[Issue Queue](https://github.com/backdrop-contrib/user_picture_field/issues)

## Current Maintainers

- [Laryn Kragt Bakker](https://github.com/laryn/), [CEDC.org](https://CEDC.org)

## Credits

 - Ported to Backdrop by [Laryn Kragt Bakker](https://github.com/laryn/),
   [CEDC.org](https://CEDC.org)
 - Author for Drupal 7: Howard Ge
 - Sponsors for Drupal 7: _FLTRP_ and _Think in Drupal_

## License

This project is GPL v2 software. See the LICENSE.txt file in this directory for
complete text.
