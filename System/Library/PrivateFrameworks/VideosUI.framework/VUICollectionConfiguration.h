/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:23:02 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface VUICollectionConfiguration : NSObject {

	BOOL _hideLockupTitles;
	long long _gridFilter;
	long long _gridStyle;
	long long _gridType;
	double _minimumLineSpacing;

}

@property (assign,nonatomic) long long gridFilter;                   //@synthesize gridFilter=_gridFilter - In the implementation block
@property (assign,nonatomic) long long gridStyle;                    //@synthesize gridStyle=_gridStyle - In the implementation block
@property (assign,nonatomic) long long gridType;                     //@synthesize gridType=_gridType - In the implementation block
@property (assign,nonatomic) double minimumLineSpacing;              //@synthesize minimumLineSpacing=_minimumLineSpacing - In the implementation block
@property (assign,nonatomic) BOOL hideLockupTitles;                  //@synthesize hideLockupTitles=_hideLockupTitles - In the implementation block
-(void)setMinimumLineSpacing:(double)arg1 ;
-(double)minimumLineSpacing;
-(void)setGridType:(long long)arg1 ;
-(void)setGridStyle:(long long)arg1 ;
-(long long)gridStyle;
-(long long)gridType;
-(long long)gridFilter;
-(void)setGridFilter:(long long)arg1 ;
-(BOOL)hideLockupTitles;
-(void)setHideLockupTitles:(BOOL)arg1 ;
@end

