﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/acm/ACM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ACM
{
namespace Model
{
  enum class RenewalStatus
  {
    NOT_SET,
    PENDING_AUTO_RENEWAL,
    PENDING_VALIDATION,
    SUCCESS,
    FAILED
  };

namespace RenewalStatusMapper
{
AWS_ACM_API RenewalStatus GetRenewalStatusForName(const Aws::String& name);

AWS_ACM_API Aws::String GetNameForRenewalStatus(RenewalStatus value);
} // namespace RenewalStatusMapper
} // namespace Model
} // namespace ACM
} // namespace Aws
