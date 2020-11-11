/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:20:55 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/PGTitleSpecDelegate.h>

@protocol PGSpecBasedTitleGeneratorDelegate;
@class NSSet, PGTitleSpecCollection, PGTitle, NSString;

@interface PGSpecBasedTitleGenerator : NSObject <PGTitleSpecDelegate> {

	NSSet* _momentNodes;
	NSSet* _features;
	PGTitleSpecCollection* _specCollection;
	PGTitle* _title;
	id<PGSpecBasedTitleGeneratorDelegate> _delegate;
	unsigned long long _lineBreakBehavior;

}

@property (nonatomic,retain) NSSet * momentNodes;                                 //@synthesize momentNodes=_momentNodes - In the implementation block
@property (nonatomic,retain) NSSet * features;                                    //@synthesize features=_features - In the implementation block
@property (nonatomic,retain) PGTitleSpecCollection * specCollection;              //@synthesize specCollection=_specCollection - In the implementation block
@property (nonatomic,readonly) PGTitle * title;                                   //@synthesize title=_title - In the implementation block
@property (assign,nonatomic) unsigned long long lineBreakBehavior;                //@synthesize lineBreakBehavior=_lineBreakBehavior - In the implementation block
@property (__weak) id<PGSpecBasedTitleGeneratorDelegate> delegate;                //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<PGSpecBasedTitleGeneratorDelegate>)delegate;
-(void)setDelegate:(id<PGSpecBasedTitleGeneratorDelegate>)arg1 ;
-(PGTitle *)title;
-(id)_title;
-(NSSet *)features;
-(void)setFeatures:(NSSet *)arg1 ;
-(NSSet *)momentNodes;
-(void)setMomentNodes:(NSSet *)arg1 ;
-(unsigned long long)lineBreakBehavior;
-(void)setLineBreakBehavior:(unsigned long long)arg1 ;
-(id)titleSpec:(id)arg1 inputForArgument:(id)arg2 ;
-(id)initWithMomentNodes:(id)arg1 specCollection:(id)arg2 ;
-(id)initWithMomentNodes:(id)arg1 memoryCategory:(unsigned long long)arg2 subcategory:(unsigned long long)arg3 ;
-(id)initWithMomentNodes:(id)arg1 personNodes:(id)arg2 memoryCategory:(unsigned long long)arg3 subcategory:(unsigned long long)arg4 ;
-(id)initWithMomentNodes:(id)arg1 meaningLabel:(id)arg2 ;
-(id)initWithMomentNodes:(id)arg1 features:(id)arg2 meaningLabel:(id)arg3 isAggregation:(BOOL)arg4 ;
-(id)initWithMomentNodes:(id)arg1 features:(id)arg2 specCollection:(id)arg3 ;
-(id)_titleFromSpecs:(id)arg1 ;
-(PGTitleSpecCollection *)specCollection;
-(void)setSpecCollection:(PGTitleSpecCollection *)arg1 ;
@end

