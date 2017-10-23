//
//  STCollectionViewModel.m
//  SpringTour
//
//  Created by Tony on 16/7/6.
//  Copyright © 2016年 SpringTour. All rights reserved.
//

#import "STCollectionViewModel.h"

@implementation STCollectionSectionViewModel
- (instancetype)init
{
    self = [super init];
    if (self) {
        self.cellModelArr=@[].mutableCopy;
    }
    return self;
}
@end

@implementation STCollectionViewModel

- (instancetype)init
{
    self = [super init];
    if (self) {
        self.sectionViewModelArr=@[].mutableCopy;
    }
    return self;
}

@end
