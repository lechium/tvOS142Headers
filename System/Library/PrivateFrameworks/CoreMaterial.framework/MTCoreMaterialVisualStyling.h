/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:20:18 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/CoreMaterial.framework/CoreMaterial
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreMaterial/CoreMaterial-Structs.h>
#import <libobjc.A.dylib/MTTinting.h>

@protocol MTVisualStyleSetProviding;
@class NSDictionary, NSString, CAFilter;

@interface MTCoreMaterialVisualStyling : NSObject <MTTinting> {

	id<MTVisualStyleSetProviding> _visualStyleSet;
	NSString* _visualStyleName;
	CAFilter* _composedFilter;
	NSDictionary* _tintColorDescription;
	CGColorRef _tintColor;
	double _tintAlpha;
	NSString* _compositingFilter;
	NSString* _filterType;
	NSDictionary* _filterProperties;

}

@property (nonatomic,readonly) NSString * visualStyleSetName; 
@property (nonatomic,readonly) NSString * visualStyleName; 
@property (getter=_composedFilter,nonatomic,readonly) CAFilter * composedFilter; 
@property (nonatomic,copy,readonly) NSDictionary * tintColorDescription; 
@property (nonatomic,readonly) CGColorRef tintColor; 
@property (nonatomic,readonly) double tintAlpha; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(void)dealloc;
-(id)filterType;
-(id)compositingFilter;
-(CGColorRef)tintColor;
-(void)_processTintingDescription:(id)arg1 ;
-(void)_processBlendingDescription:(id)arg1 ;
-(void)_processFilteringDescription:(id)arg1 ;
-(id)initWithVisualStyleSet:(id)arg1 styleName:(id)arg2 description:(id)arg3 andDescendantDescriptions:(id)arg4 ;
-(id)_composedFilter;
-(id)filterProperties;
-(NSString *)visualStyleSetName;
-(NSString *)visualStyleName;
-(void)_applyToLayer:(id)arg1 withColorBlock:(/*^block*/id)arg2 ;
-(void)_getCompositingFilter:(id*)arg1 tintColor:(CGColor*)arg2 ;
-(void)_getFilterType:(id*)arg1 vibrantColor:(CGColor*)arg2 tintColor:(CGColor*)arg3 inputReversed:(BOOL*)arg4 ;
-(NSDictionary *)tintColorDescription;
-(double)tintAlpha;
@end

