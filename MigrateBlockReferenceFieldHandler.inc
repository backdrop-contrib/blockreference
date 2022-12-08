<?php
/**
 * @file
 * Support for processing blockreference fields in Migrate.
 */

/**
 * {@inheritdoc}
 */
class MigrateBlockReferenceFieldHandler extends MigrateSimpleFieldHandler {
  // phpcs:ignore Backdrop.Commenting.FunctionComment -- Inherited from Migrate
  public function __construct($options = array()) {
    parent::__construct(array(
      'value_key' => 'moddelta',
      'skip_empty' => TRUE,
    ));

    $this->registerTypes(array('blockreference'));
  }
}
