/*
 *
 * BitcoinLikeStrategyUtxoPicker.h
 * ledger-core
 *
 * Created by Pierre Pollastri on 29/03/2018.
 *
 * The MIT License (MIT)
 *
 * Copyright (c) 2017 Ledger
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 *
 */

#ifndef LEDGER_CORE_BITCOINLIKESTRATEGYUTXOPICKER_H
#define LEDGER_CORE_BITCOINLIKESTRATEGYUTXOPICKER_H

#include "BitcoinLikeUtxoPicker.h"

namespace ledger {
    namespace core {
        class BitcoinLikeStrategyUtxoPicker : public BitcoinLikeUtxoPicker {
        public:
            BitcoinLikeStrategyUtxoPicker(const std::shared_ptr<api::ExecutionContext> &context,
                                          const api::Currency &currency);

        protected:
            void fillInputs(Buddy &buddy) override;
            void fillOutputs(Buddy &buddy) override;
            void fillTransactionInfo(Buddy &buddy) override;

        private:

        };
    }
}


#endif //LEDGER_CORE_BITCOINLIKESTRATEGYUTXOPICKER_H
