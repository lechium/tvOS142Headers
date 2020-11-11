/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:17:21 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <ProVideo/ProVideo-Structs.h>
@class NSDate, PVColorSpace;

@interface HGInputBitmapCacheItem : NSObject {

	NSDate* _lastUsedTime;
	PVColorSpace* _colorSpace;
	CGSize _fullSize;
	vector<HGRef<HGBitmap>, std::__1::allocator<HGRef<HGBitmap> > >* _bitmaps;

}

@property (nonatomic,readonly) vector<HGRef<HGBitmap> bitmaps;              //@synthesize bitmaps=_bitmaps - In the implementation block
@property (nonatomic,readonly) NSDate * lastUsedTime;                       //@synthesize lastUsedTime=_lastUsedTime - In the implementation block
@property (nonatomic,readonly) CGSize fullSize;                             //@synthesize fullSize=_fullSize - In the implementation block
@property (nonatomic,readonly) PVColorSpace * colorSpace;                   //@synthesize colorSpace=_colorSpace - In the implementation block
-(PVColorSpace *)colorSpace;
-(NSDate *)lastUsedTime;
-(void)updateLastUsedTime;
-(id)initWithHGBitmap:(vector<HGRef<HGBitmap>, std::__1::allocator<HGRef<HGBitmap> > >*)arg1 fullSize:(CGSize)arg2 colorSpace:(id)arg3 ;
-(vector<HGRef<HGBitmap>)bitmaps;
-(CGSize)fullSize;
@end

