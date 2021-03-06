/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:13:26 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotoLibraryServices/PLDataClustering.h>

@interface PLDataDensityClustering : PLDataClustering {

	double _maximumDistance;
	unsigned long long _minimumNumberOfObjects;

}

@property (assign,nonatomic) double maximumDistance;                                 //@synthesize maximumDistance=_maximumDistance - In the implementation block
@property (assign,nonatomic) unsigned long long minimumNumberOfObjects;              //@synthesize minimumNumberOfObjects=_minimumNumberOfObjects - In the implementation block
-(id)init;
-(void)setMaximumDistance:(double)arg1 ;
-(double)maximumDistance;
-(void)setMinimumNumberOfObjects:(unsigned long long)arg1 ;
-(unsigned long long)minimumNumberOfObjects;
@end

