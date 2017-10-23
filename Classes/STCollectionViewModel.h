//
//  STCollectionViewModel.h
//  SpringTour
//
//  Created by Tony on 16/7/6.
//  Copyright © 2016年 SpringTour. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "STCollectionViewCellModel.h"

@interface STCollectionSectionViewModel : NSObject

@property (nonatomic,strong) NSMutableArray <STCollectionViewCellModel*> *cellModelArr;
@property (nonatomic,copy) UIEdgeInsets (^SectionEdgeInsets)(UICollectionView *collectionView,UICollectionViewLayout *collectionViewLayout,NSInteger section);
@property (nonatomic,copy) CGFloat (^minimumInteritemSpacing)(UICollectionView *collectionView,UICollectionViewLayout *collectionViewLayout,NSInteger section);
@property (nonatomic,copy) CGFloat (^minimumLineSpacing)(UICollectionView *collectionView,UICollectionViewLayout *collectionViewLayout,NSInteger section);

@end

@interface STCollectionViewModel : NSObject

@property (nonatomic,strong) NSMutableArray<STCollectionSectionViewModel*> *sectionViewModelArr;


@end
