/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:13:37 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/Photos.framework/Photos
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <Photos/Photos-Structs.h>
@interface PHImageDecoderOptions : NSObject {

	BOOL _shouldLoadGainMap;
	BOOL _applyOrientationTransform;
	BOOL _optimizeForDrawing;
	BOOL _highPriority;
	BOOL _waitUntilComplete;
	long long _maximumLongSideLength;
	long long _resizeMode;

}

@property (assign,nonatomic) BOOL shouldLoadGainMap;                       //@synthesize shouldLoadGainMap=_shouldLoadGainMap - In the implementation block
@property (assign,nonatomic) long long maximumLongSideLength;              //@synthesize maximumLongSideLength=_maximumLongSideLength - In the implementation block
@property (assign,nonatomic) long long resizeMode;                         //@synthesize resizeMode=_resizeMode - In the implementation block
@property (assign,nonatomic) BOOL applyOrientationTransform;               //@synthesize applyOrientationTransform=_applyOrientationTransform - In the implementation block
@property (assign,nonatomic) BOOL optimizeForDrawing;                      //@synthesize optimizeForDrawing=_optimizeForDrawing - In the implementation block
@property (assign,nonatomic) BOOL highPriority;                            //@synthesize highPriority=_highPriority - In the implementation block
@property (assign,nonatomic) BOOL waitUntilComplete;                       //@synthesize waitUntilComplete=_waitUntilComplete - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)waitUntilComplete;
-(void)setHighPriority:(BOOL)arg1 ;
-(BOOL)highPriority;
-(long long)maximumLongSideLength;
-(void)setMaximumLongSideLength:(long long)arg1 ;
-(BOOL)shouldLoadGainMap;
-(void)setShouldLoadGainMap:(BOOL)arg1 ;
-(long long)resizeMode;
-(void)setResizeMode:(long long)arg1 ;
-(BOOL)applyOrientationTransform;
-(void)setApplyOrientationTransform:(BOOL)arg1 ;
-(BOOL)optimizeForDrawing;
-(void)setOptimizeForDrawing:(BOOL)arg1 ;
-(void)setWaitUntilComplete:(BOOL)arg1 ;
@end

