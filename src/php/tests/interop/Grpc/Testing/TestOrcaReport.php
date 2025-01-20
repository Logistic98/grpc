<?php
# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: src/proto/grpc/testing/messages.proto

namespace Grpc\Testing;

use Google\Protobuf\Internal\GPBType;
use Google\Protobuf\Internal\RepeatedField;
use Google\Protobuf\Internal\GPBUtil;

/**
 * Metrics data the server will update and send to the client. It mirrors orca load report
 * https://github.com/cncf/xds/blob/eded343319d09f30032952beda9840bbd3dcf7ac/xds/data/orca/v3/orca_load_report.proto#L15,
 * but avoids orca dependency. Used by both per-query and out-of-band reporting tests.
 *
 * Generated from protobuf message <code>grpc.testing.TestOrcaReport</code>
 */
class TestOrcaReport extends \Google\Protobuf\Internal\Message
{
    /**
     * Generated from protobuf field <code>double cpu_utilization = 1;</code>
     */
    protected $cpu_utilization = 0.0;
    /**
     * Generated from protobuf field <code>double memory_utilization = 2;</code>
     */
    protected $memory_utilization = 0.0;
    /**
     * Generated from protobuf field <code>map<string, double> request_cost = 3;</code>
     */
    private $request_cost;
    /**
     * Generated from protobuf field <code>map<string, double> utilization = 4;</code>
     */
    private $utilization;

    /**
     * Constructor.
     *
     * @param array $data {
     *     Optional. Data for populating the Message object.
     *
     *     @type float $cpu_utilization
     *     @type float $memory_utilization
     *     @type array|\Google\Protobuf\Internal\MapField $request_cost
     *     @type array|\Google\Protobuf\Internal\MapField $utilization
     * }
     */
    public function __construct($data = NULL) {
        \GPBMetadata\Src\Proto\Grpc\Testing\Messages::initOnce();
        parent::__construct($data);
    }

    /**
     * Generated from protobuf field <code>double cpu_utilization = 1;</code>
     * @return float
     */
    public function getCpuUtilization()
    {
        return $this->cpu_utilization;
    }

    /**
     * Generated from protobuf field <code>double cpu_utilization = 1;</code>
     * @param float $var
     * @return $this
     */
    public function setCpuUtilization($var)
    {
        GPBUtil::checkDouble($var);
        $this->cpu_utilization = $var;

        return $this;
    }

    /**
     * Generated from protobuf field <code>double memory_utilization = 2;</code>
     * @return float
     */
    public function getMemoryUtilization()
    {
        return $this->memory_utilization;
    }

    /**
     * Generated from protobuf field <code>double memory_utilization = 2;</code>
     * @param float $var
     * @return $this
     */
    public function setMemoryUtilization($var)
    {
        GPBUtil::checkDouble($var);
        $this->memory_utilization = $var;

        return $this;
    }

    /**
     * Generated from protobuf field <code>map<string, double> request_cost = 3;</code>
     * @return \Google\Protobuf\Internal\MapField
     */
    public function getRequestCost()
    {
        return $this->request_cost;
    }

    /**
     * Generated from protobuf field <code>map<string, double> request_cost = 3;</code>
     * @param array|\Google\Protobuf\Internal\MapField $var
     * @return $this
     */
    public function setRequestCost($var)
    {
        $arr = GPBUtil::checkMapField($var, \Google\Protobuf\Internal\GPBType::STRING, \Google\Protobuf\Internal\GPBType::DOUBLE);
        $this->request_cost = $arr;

        return $this;
    }

    /**
     * Generated from protobuf field <code>map<string, double> utilization = 4;</code>
     * @return \Google\Protobuf\Internal\MapField
     */
    public function getUtilization()
    {
        return $this->utilization;
    }

    /**
     * Generated from protobuf field <code>map<string, double> utilization = 4;</code>
     * @param array|\Google\Protobuf\Internal\MapField $var
     * @return $this
     */
    public function setUtilization($var)
    {
        $arr = GPBUtil::checkMapField($var, \Google\Protobuf\Internal\GPBType::STRING, \Google\Protobuf\Internal\GPBType::DOUBLE);
        $this->utilization = $arr;

        return $this;
    }

}

