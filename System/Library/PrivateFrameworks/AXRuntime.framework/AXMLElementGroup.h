/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:14:02 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/AXRuntime.framework/AXRuntime
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <AXRuntime/AXRuntime-Structs.h>
@class AXMVisionFeature, NSMutableArray;

@interface AXMLElementGroup : NSObject {

	BOOL _topLevel;
	BOOL _includeChildren;
	AXMVisionFeature* _feature;
	NSMutableArray* _subfeatures;
	double _confidence;
	CGRect _frame;

}

@property (nonatomic,retain) AXMVisionFeature * feature;                //@synthesize feature=_feature - In the implementation block
@property (nonatomic,retain) NSMutableArray * subfeatures;              //@synthesize subfeatures=_subfeatures - In the implementation block
@property (assign,nonatomic) BOOL topLevel;                             //@synthesize topLevel=_topLevel - In the implementation block
@property (assign,nonatomic) BOOL includeChildren;                      //@synthesize includeChildren=_includeChildren - In the implementation block
@property (assign,nonatomic) double confidence;                         //@synthesize confidence=_confidence - In the implementation block
@property (assign,nonatomic) CGRect frame;                              //@synthesize frame=_frame - In the implementation block
-(id)init;
-(double)confidence;
-(CGRect)frame;
-(void)setFrame:(CGRect)arg1 ;
-(AXMVisionFeature *)feature;
-(void)setConfidence:(double)arg1 ;
-(id)textLabel;
-(void)setFeature:(AXMVisionFeature *)arg1 ;
-(void)setTopLevel:(BOOL)arg1 ;
-(void)setIncludeChildren:(BOOL)arg1 ;
-(void)setSubfeatures:(NSMutableArray *)arg1 ;
-(NSMutableArray *)subfeatures;
-(id)childFeatures;
-(BOOL)topLevel;
-(BOOL)includeChildren;
@end

