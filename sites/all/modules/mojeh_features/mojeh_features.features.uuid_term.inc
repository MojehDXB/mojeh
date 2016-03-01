<?php
/**
 * @file
 * mojeh_features.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function mojeh_features_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'Spreads',
    'description' => '',
    'format' => 'wysiwyg',
    'weight' => 0,
    'uuid' => '00815f62-a2d9-4d68-88b7-4d639a6f0204',
    'vocabulary_machine_name' => 'sub_category',
    'field_show_in_menu' => array(
      'und' => array(
        0 => array(
          'value' => 1,
        ),
      ),
    ),
    'field_column_category' => array(
      'und' => array(
        0 => array(
          'tid' => 'f0603890-b8af-410d-bbb8-d5ff534f7cc6',
        ),
      ),
    ),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Photo Shoots',
    'description' => '',
    'format' => 'wysiwyg',
    'weight' => 0,
    'uuid' => '07f6ee57-1dd1-408a-8ce7-acf5ed923406',
    'vocabulary_machine_name' => 'sub_category',
    'field_show_in_menu' => array(
      'und' => array(
        0 => array(
          'value' => 1,
        ),
      ),
    ),
    'field_column_category' => array(
      'und' => array(
        0 => array(
          'tid' => '3c574fb3-e546-4d30-8ac7-0a537f95b530',
        ),
      ),
    ),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Travel',
    'description' => '',
    'format' => 'wysiwyg',
    'weight' => 0,
    'uuid' => '09b413df-600d-487c-94d8-2256bd8f37e4',
    'vocabulary_machine_name' => 'sub_category',
    'field_show_in_menu' => array(
      'und' => array(
        0 => array(
          'value' => 1,
        ),
      ),
    ),
    'field_column_category' => array(
      'und' => array(
        0 => array(
          'tid' => '8315532a-5cf1-4abb-9889-12bdb74105dd',
        ),
      ),
    ),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Society',
    'description' => '',
    'format' => 'wysiwyg',
    'weight' => 4,
    'uuid' => '0de5f456-f89f-42fb-bce5-db8be024505c',
    'vocabulary_machine_name' => 'category',
    'field_ad_zone_id' => array(
      'und' => array(
        0 => array(
          'value' => 12,
          'format' => NULL,
          'safe_value' => 12,
        ),
      ),
    ),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Talking Point',
    'description' => '',
    'format' => 'wysiwyg',
    'weight' => 0,
    'uuid' => '1d7a86bd-9fde-4901-812f-db5459e0912d',
    'vocabulary_machine_name' => 'sub_category',
    'field_show_in_menu' => array(
      'und' => array(
        0 => array(
          'value' => 1,
        ),
      ),
    ),
    'field_column_category' => array(
      'und' => array(
        0 => array(
          'tid' => '38e2be2c-4d4d-4870-89a2-2591adbf5c03',
        ),
      ),
    ),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Article',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '281fb0b1-f5d7-49be-860a-ab0d4e09d207',
    'vocabulary_machine_name' => 'tags',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Celebrated Women In Society',
    'description' => 'This sub-category is for Celebrated Women in Society content.',
    'format' => 'wysiwyg',
    'weight' => 0,
    'uuid' => '2abad5c6-07ab-483b-a43a-780012f98dde',
    'vocabulary_machine_name' => 'sub_category',
    'field_show_in_menu' => array(
      'und' => array(
        0 => array(
          'value' => 1,
        ),
      ),
    ),
    'field_column_category' => array(
      'und' => array(
        0 => array(
          'tid' => '3c574fb3-e546-4d30-8ac7-0a537f95b530',
        ),
      ),
    ),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Celebrated Woman In Society',
    'description' => '',
    'format' => 'wysiwyg',
    'weight' => 0,
    'uuid' => '2e6eb7e3-47b7-4e79-9fb7-c87f52dd402d',
    'vocabulary_machine_name' => 'sub_category',
    'field_show_in_menu' => array(
      'und' => array(
        0 => array(
          'value' => 1,
        ),
      ),
    ),
    'field_column_category' => array(
      'und' => array(
        0 => array(
          'tid' => '0de5f456-f89f-42fb-bce5-db8be024505c',
        ),
      ),
    ),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'CHAnel',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '30453522-ad0a-4184-8ef4-6e0cec6368d6',
    'vocabulary_machine_name' => 'tags',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Accessories',
    'description' => '',
    'format' => 'full_html',
    'weight' => 2,
    'uuid' => '38e2be2c-4d4d-4870-89a2-2591adbf5c03',
    'vocabulary_machine_name' => 'category',
    'field_ad_zone_id' => array(
      'und' => array(
        0 => array(
          'value' => 11,
          'format' => NULL,
          'safe_value' => 11,
        ),
      ),
    ),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Fashion',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '3c574fb3-e546-4d30-8ac7-0a537f95b530',
    'vocabulary_machine_name' => 'category',
    'field_ad_zone_id' => array(
      'und' => array(
        0 => array(
          'value' => 8,
          'format' => NULL,
          'safe_value' => 8,
        ),
      ),
    ),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'My Stylish Life',
    'description' => '',
    'format' => 'wysiwyg',
    'weight' => 0,
    'uuid' => '41ab4642-e532-4e4e-960d-cb45a14a323e',
    'vocabulary_machine_name' => 'sub_category',
    'field_show_in_menu' => array(
      'und' => array(
        0 => array(
          'value' => 1,
        ),
      ),
    ),
    'field_column_category' => array(
      'und' => array(
        0 => array(
          'tid' => '8315532a-5cf1-4abb-9889-12bdb74105dd',
        ),
      ),
    ),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Interviews',
    'description' => '',
    'format' => 'wysiwyg',
    'weight' => 0,
    'uuid' => '4b153e7f-180c-4339-ae19-bdfe732c52ad',
    'vocabulary_machine_name' => 'sub_category',
    'field_show_in_menu' => array(
      'und' => array(
        0 => array(
          'value' => 1,
        ),
      ),
    ),
    'field_column_category' => array(
      'und' => array(
        0 => array(
          'tid' => 'f0603890-b8af-410d-bbb8-d5ff534f7cc6',
        ),
      ),
    ),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Fine Jewellery',
    'description' => '',
    'format' => 'wysiwyg',
    'weight' => 0,
    'uuid' => '593193b2-7b44-467d-adcf-4d2334be7119',
    'vocabulary_machine_name' => 'sub_category',
    'field_show_in_menu' => array(
      'und' => array(
        0 => array(
          'value' => 1,
        ),
      ),
    ),
    'field_column_category' => array(
      'und' => array(
        0 => array(
          'tid' => '38e2be2c-4d4d-4870-89a2-2591adbf5c03',
        ),
      ),
    ),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'special feature',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '61dfdaf5-479a-4b76-b3b7-ba2375606870',
    'vocabulary_machine_name' => 'tags',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Spreads',
    'description' => '',
    'format' => 'wysiwyg',
    'weight' => 0,
    'uuid' => '6f22ca81-84f0-4294-a9f9-0432368784ec',
    'vocabulary_machine_name' => 'sub_category',
    'field_show_in_menu' => array(
      'und' => array(
        0 => array(
          'value' => 1,
        ),
      ),
    ),
    'field_column_category' => array(
      'und' => array(
        0 => array(
          'tid' => '3c574fb3-e546-4d30-8ac7-0a537f95b530',
        ),
      ),
    ),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'other tag',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '78f02b17-1a0f-4d93-bc52-a2f5b7bb241e',
    'vocabulary_machine_name' => 'tags',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Artist in Residence',
    'description' => '',
    'format' => 'wysiwyg',
    'weight' => 0,
    'uuid' => '7d8419b4-3b37-4fab-917e-ea195a211f80',
    'vocabulary_machine_name' => 'sub_category',
    'field_show_in_menu' => array(
      'und' => array(
        0 => array(
          'value' => 1,
        ),
      ),
    ),
    'field_column_category' => array(
      'und' => array(
        0 => array(
          'tid' => '8315532a-5cf1-4abb-9889-12bdb74105dd',
        ),
      ),
    ),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Culture',
    'description' => '',
    'format' => 'full_html',
    'weight' => 3,
    'uuid' => '8315532a-5cf1-4abb-9889-12bdb74105dd',
    'vocabulary_machine_name' => 'category',
    'field_ad_zone_id' => array(
      'und' => array(
        0 => array(
          'value' => 10,
          'format' => NULL,
          'safe_value' => 10,
        ),
      ),
    ),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'tag `',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '8d0ee016-4124-4293-acd9-857bfb5e7dfe',
    'vocabulary_machine_name' => 'tags',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Spreads',
    'description' => '',
    'format' => 'wysiwyg',
    'weight' => 0,
    'uuid' => 'aa895d0f-9c33-417a-94fd-9719738ac183',
    'vocabulary_machine_name' => 'sub_category',
    'field_show_in_menu' => array(
      'und' => array(
        0 => array(
          'value' => 1,
        ),
      ),
    ),
    'field_column_category' => array(
      'und' => array(
        0 => array(
          'tid' => '38e2be2c-4d4d-4870-89a2-2591adbf5c03',
        ),
      ),
    ),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'video',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'ac4ad618-b1ca-47d1-859b-51ec81aa061b',
    'vocabulary_machine_name' => 'tags',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Society Belles',
    'description' => '',
    'format' => 'wysiwyg',
    'weight' => 0,
    'uuid' => 'ac9a1ef9-ee75-49b0-ad21-6f33eb33ae67',
    'vocabulary_machine_name' => 'sub_category',
    'field_show_in_menu' => array(
      'und' => array(
        0 => array(
          'value' => 1,
        ),
      ),
    ),
    'field_column_category' => array(
      'und' => array(
        0 => array(
          'tid' => '0de5f456-f89f-42fb-bce5-db8be024505c',
        ),
      ),
    ),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Talking Point',
    'description' => '',
    'format' => 'wysiwyg',
    'weight' => 0,
    'uuid' => 'af5ab102-6d8e-4b02-80d5-da29d54dcbae',
    'vocabulary_machine_name' => 'sub_category',
    'field_show_in_menu' => array(
      'und' => array(
        0 => array(
          'value' => 1,
        ),
      ),
    ),
    'field_column_category' => array(
      'und' => array(
        0 => array(
          'tid' => 'f0603890-b8af-410d-bbb8-d5ff534f7cc6',
        ),
      ),
    ),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Beauty Secrets',
    'description' => '',
    'format' => 'wysiwyg',
    'weight' => 0,
    'uuid' => 'b4f979c9-b199-45ec-82a7-d4189b3f5f15',
    'vocabulary_machine_name' => 'sub_category',
    'field_show_in_menu' => array(
      'und' => array(
        0 => array(
          'value' => 1,
        ),
      ),
    ),
    'field_column_category' => array(
      'und' => array(
        0 => array(
          'tid' => 'f0603890-b8af-410d-bbb8-d5ff534f7cc6',
        ),
      ),
    ),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'perfume',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'b8310dfe-8c6c-4c18-a865-444475988df5',
    'vocabulary_machine_name' => 'tags',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Chanel',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'bf9e2208-3e02-4b48-9288-3dcd6064f3b6',
    'vocabulary_machine_name' => 'tags',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'chanel',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'ca53fa61-c5eb-44e9-9b97-781745ac079c',
    'vocabulary_machine_name' => 'tags',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Videos',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'd7492cfe-332b-478e-bb7e-078c0aed6f85',
    'vocabulary_machine_name' => 'tags',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Designer Interview',
    'description' => '',
    'format' => 'wysiwyg',
    'weight' => 0,
    'uuid' => 'dbe51a58-35bc-42ef-a9a7-f0b428264cb7',
    'vocabulary_machine_name' => 'sub_category',
    'field_show_in_menu' => array(
      'und' => array(
        0 => array(
          'value' => 1,
        ),
      ),
    ),
    'field_column_category' => array(
      'und' => array(
        0 => array(
          'tid' => '3c574fb3-e546-4d30-8ac7-0a537f95b530',
        ),
      ),
    ),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'The Daily',
    'description' => '',
    'format' => 'wysiwyg',
    'weight' => 0,
    'uuid' => 'dc3d1ed2-ba18-4d7b-a429-0cad61f4da1e',
    'vocabulary_machine_name' => 'sub_category',
    'field_show_in_menu' => array(
      'und' => array(
        0 => array(
          'value' => 1,
        ),
      ),
    ),
    'field_column_category' => array(
      'und' => array(
        0 => array(
          'tid' => '8315532a-5cf1-4abb-9889-12bdb74105dd',
        ),
      ),
    ),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Feature',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'e147cc9a-f233-4e2f-9426-e3ebb8a78eb8',
    'vocabulary_machine_name' => 'tags',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Style Insider',
    'description' => '',
    'format' => 'wysiwyg',
    'weight' => 0,
    'uuid' => 'eefb00ad-d86f-499e-ad69-6ce483278340',
    'vocabulary_machine_name' => 'sub_category',
    'field_show_in_menu' => array(
      'und' => array(
        0 => array(
          'value' => 1,
        ),
      ),
    ),
    'field_column_category' => array(
      'und' => array(
        0 => array(
          'tid' => '0de5f456-f89f-42fb-bce5-db8be024505c',
        ),
      ),
    ),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Beauty',
    'description' => '',
    'format' => 'full_html',
    'weight' => 1,
    'uuid' => 'f0603890-b8af-410d-bbb8-d5ff534f7cc6',
    'vocabulary_machine_name' => 'category',
    'field_ad_zone_id' => array(
      'und' => array(
        0 => array(
          'value' => 9,
          'format' => NULL,
          'safe_value' => 9,
        ),
      ),
    ),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Mojeh',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'f15d198d-0e38-42b1-9338-4f60527b741e',
    'vocabulary_machine_name' => 'tags',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Blah',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'f82396fe-1fd5-49f4-aace-8db7046e0042',
    'vocabulary_machine_name' => 'tags',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Interviews',
    'description' => '',
    'format' => 'wysiwyg',
    'weight' => 0,
    'uuid' => 'feb34d9a-e1c4-4c69-bcc0-5fd86f4b20ec',
    'vocabulary_machine_name' => 'sub_category',
    'field_show_in_menu' => array(
      'und' => array(
        0 => array(
          'value' => 1,
        ),
      ),
    ),
    'field_column_category' => array(
      'und' => array(
        0 => array(
          'tid' => '3c574fb3-e546-4d30-8ac7-0a537f95b530',
        ),
      ),
    ),
    'metatags' => array(),
  );
  return $terms;
}
