/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:20:17 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/CoreAutoLayout.framework/CoreAutoLayout
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreAutoLayout/CoreAutoLayout-Structs.h>
#import <libobjc.A.dylib/NSLayoutRule.h>

@class NSArray, NSLayoutRect, NSString;

@interface NSStackInContainerRule : NSObject <NSLayoutRule> {

	NSArray* _stackedRects;
	NSLayoutRect* _containingRect;
	double _spacing;
	long long _orientation;

}

@property (copy,readonly) NSLayoutRect * containingRect;              //@synthesize containingRect=_containingRect - In the implementation block
@property (copy,readonly) NSArray * stackedRects;                     //@synthesize stackedRects=_stackedRects - In the implementation block
@property (readonly) double spacing;                                  //@synthesize spacing=_spacing - In the implementation block
@property (readonly) long long orientation;                           //@synthesize orientation=_orientation - In the implementation block
@property (copy,readonly) NSString * identifier; 
@property (copy,readonly) NSString * ruleDescription; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)stackWithOrientation:(long long)arg1 stackedRects:(id)arg2 inContainer:(id)arg3 spacing:(double)arg4 ;
+(id)horizontalStackWithRects:(id)arg1 inContainer:(id)arg2 spacing:(double)arg3 ;
+(id)verticalStackWithRects:(id)arg1 inContainer:(id)arg2 spacing:(double)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(void)dealloc;
-(NSString *)identifier;
-(long long)orientation;
-(double)spacing;
-(NSString *)ruleDescription;
-(id)makeChildRules;
-(NSArray *)stackedRects;
-(NSLayoutRect *)containingRect;
@end

