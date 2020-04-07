/**
 * Copyright (c) 2020 BlockDev AG
 *
 * This source code is licensed under the MIT license found in the
 * LICENSE file in the root directory of this source tree.
 */

import { validateMultiple } from '../fmt/validation'

export interface ConnectionCount {
  success: number
  fail: number
  timeout: number
}

// eslint-disable-next-line @typescript-eslint/no-explicit-any
export function parseConnectionCount(data: any): ConnectionCount {
  validateMultiple('ConnectCount', data, [
    { name: 'success', type: 'number' },
    { name: 'fail', type: 'number' },
  ])
  return data
}
