// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from tuples.djinni

#import "LGEstimatedSize.h"


@implementation LGEstimatedSize

- (nonnull instancetype)initWithMin:(int32_t)min
                                max:(int32_t)max
{
    if (self = [super init]) {
        _min = min;
        _max = max;
    }
    return self;
}

+ (nonnull instancetype)EstimatedSizeWithMin:(int32_t)min
                                         max:(int32_t)max
{
    return [[self alloc] initWithMin:min
                                 max:max];
}

- (NSString *)description
{
    return [NSString stringWithFormat:@"<%@ %p min:%@ max:%@>", self.class, (void *)self, @(self.min), @(self.max)];
}

@end