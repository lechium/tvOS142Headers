/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:13:26 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PrototypeTools/PrototypeTools-Structs.h>
#import <PrototypeTools/PTSettings.h>

@interface PTSizeSettings : PTSettings {

	double _width;
	double _height;

}

@property (assign,nonatomic) double width;                  //@synthesize width=_width - In the implementation block
@property (assign,nonatomic) double height;                 //@synthesize height=_height - In the implementation block
@property (assign,nonatomic) CGSize sizeValue; 
+(id)settingsControllerModule;
+(BOOL)ignoresKey:(id)arg1 ;
-(CGSize)sizeValue;
-(double)width;
-(double)height;
-(void)setWidth:(double)arg1 ;
-(void)setHeight:(double)arg1 ;
-(id)drillDownSummary;
-(void)setSizeValue:(CGSize)arg1 ;
@end

