/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:11:40 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreUI/CoreUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface CUIRenditionSliceInformation : NSObject <NSCopying> {

	long long _renditionType;
	double _boundaries[4];
	CGRect _destinationRect;
	SCD_Struct_CS11 _edgeInsets;

}

@property (nonatomic,readonly) long long renditionType;                 //@synthesize renditionType=_renditionType - In the implementation block
@property (nonatomic,readonly) CGRect destinationRect;                  //@synthesize destinationRect=_destinationRect - In the implementation block
@property (nonatomic,readonly) SCD_Struct_CS11 edgeInsets;              //@synthesize edgeInsets=_edgeInsets - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(CGRect)destinationRect;
-(double)positionOfSliceBoundary:(unsigned long long)arg1 ;
-(id)initWithSliceInformation:(id)arg1 destinationRect:(CGRect)arg2 ;
-(long long)renditionType;
-(CGSize)_topLeftCapSize;
-(CGSize)_bottomRightCapSize;
-(id)initWithRenditionType:(long long)arg1 destinationRect:(CGRect)arg2 topLeftInset:(CGSize)arg3 bottomRightInset:(CGSize)arg4 ;
-(SCD_Struct_CS11)edgeInsets;
@end

