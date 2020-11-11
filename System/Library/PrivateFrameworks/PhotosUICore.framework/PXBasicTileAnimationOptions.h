/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:15:31 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface PXBasicTileAnimationOptions : NSObject <NSCopying> {

	BOOL _shouldNotifyTiles;
	BOOL _shouldSnapshotDynamicContents;
	double _delay;
	double _duration;
	long long _style;
	unsigned long long _flags;

}

@property (assign,nonatomic) double delay;                                    //@synthesize delay=_delay - In the implementation block
@property (assign,nonatomic) double duration;                                 //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) long long style;                                 //@synthesize style=_style - In the implementation block
@property (assign,nonatomic) BOOL shouldNotifyTiles;                          //@synthesize shouldNotifyTiles=_shouldNotifyTiles - In the implementation block
@property (assign,nonatomic) BOOL shouldSnapshotDynamicContents;              //@synthesize shouldSnapshotDynamicContents=_shouldSnapshotDynamicContents - In the implementation block
@property (assign,nonatomic) unsigned long long flags;                        //@synthesize flags=_flags - In the implementation block
+(id)defaultAnimationOptions;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(unsigned long long)flags;
-(double)delay;
-(void)setDelay:(double)arg1 ;
-(double)duration;
-(long long)style;
-(void)setStyle:(long long)arg1 ;
-(void)setDuration:(double)arg1 ;
-(void)setFlags:(unsigned long long)arg1 ;
-(BOOL)shouldNotifyTiles;
-(void)setShouldNotifyTiles:(BOOL)arg1 ;
-(BOOL)shouldSnapshotDynamicContents;
-(void)setShouldSnapshotDynamicContents:(BOOL)arg1 ;
@end

