//
//  STCollectionViewCellModel.h
//  SpringTour
//
//  Created by Tony on 16/7/5.
//  Copyright © 2016年 SpringTour. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface STCollectionViewCellModel : NSObject

@property (nonatomic,copy) UICollectionViewCell* (^Cell)(UICollectionView *collectionView,NSIndexPath* indexPath);
@property (nonatomic,copy) CGSize (^CellSize)(UICollectionView *collectionView,UICollectionViewLayout *collectionViewLayout,NSIndexPath* indexPath);
@property (nonatomic,copy) CGFloat (^CellminimumInteritemSpacing)(UICollectionView *collectionView,UICollectionViewLayout *collectionViewLayout,NSIndexPath* indexPath);
@property (nonatomic,copy) void (^SelectRow)(UICollectionView *collectionView,NSIndexPath* indexPath);


@end
