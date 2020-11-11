/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:20:48 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface PPQuickTypeLabeledValue : NSObject {

	unsigned _fields;
	NSString* _label;
	NSString* _value;
	double _scoreBoost;

}

@property (nonatomic,readonly) NSString * label;               //@synthesize label=_label - In the implementation block
@property (nonatomic,readonly) NSString * value;               //@synthesize value=_value - In the implementation block
@property (nonatomic,readonly) double scoreBoost;              //@synthesize scoreBoost=_scoreBoost - In the implementation block
@property (nonatomic,readonly) unsigned fields;                //@synthesize fields=_fields - In the implementation block
+(id)labeledValueWithLabel:(id)arg1 value:(id)arg2 ;
+(id)labeledValueWithLabel:(id)arg1 value:(id)arg2 scoreBoost:(double)arg3 ;
+(id)labeledValueWithLabel:(id)arg1 value:(id)arg2 scoreBoost:(double)arg3 fields:(unsigned)arg4 ;
-(NSString *)value;
-(unsigned)fields;
-(NSString *)label;
-(id)initWithLabel:(id)arg1 value:(id)arg2 scoreBoost:(double)arg3 fields:(unsigned)arg4 ;
-(double)scoreBoost;
@end

