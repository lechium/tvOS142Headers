/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:18:18 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/PMSliderProviderProtocol.h>

@protocol PMEditProviderDelegate;
@class VEKProduction, NSArray, NSString;

@interface PMDurationProvider : NSObject <PMSliderProviderProtocol> {

	VEKProduction* _production;
	id<PMEditProviderDelegate> _delegate;
	unsigned long long _selectedIndex;
	double _maxDuration;
	double _customDuration;
	double _currentDuration;
	NSArray* _localizedDurations;

}

@property (nonatomic,retain) NSArray * localizedDurations;                            //@synthesize localizedDurations=_localizedDurations - In the implementation block
@property (assign,nonatomic) double currentDuration;                                  //@synthesize currentDuration=_currentDuration - In the implementation block
@property (assign,nonatomic) double maxDuration;                                      //@synthesize maxDuration=_maxDuration - In the implementation block
@property (assign,nonatomic) double customDuration;                                   //@synthesize customDuration=_customDuration - In the implementation block
@property (assign,nonatomic) unsigned long long selectedIndex;                        //@synthesize selectedIndex=_selectedIndex - In the implementation block
@property (nonatomic,retain) VEKProduction * production;                              //@synthesize production=_production - In the implementation block
@property (assign,nonatomic,__weak) id<PMEditProviderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<PMEditProviderDelegate>)delegate;
-(void)setDelegate:(id<PMEditProviderDelegate>)arg1 ;
-(unsigned long long)numberOfItems;
-(void)setSelectedIndex:(unsigned long long)arg1 ;
-(unsigned long long)selectedIndex;
-(double)maxDuration;
-(void)setMaxDuration:(double)arg1 ;
-(VEKProduction *)production;
-(void)setProduction:(VEKProduction *)arg1 ;
-(id)initWithProduction:(id)arg1 ;
-(void)updateWithResult:(id)arg1 ;
-(id)displayNameForIndex:(unsigned long long)arg1 ;
-(void)updateLocalizedNames;
-(void)willBeginScrolling;
-(void)setLocalizedDurations:(NSArray *)arg1 ;
-(void)setCustomDuration:(double)arg1 ;
-(double)customDuration;
-(NSArray *)localizedDurations;
-(void)setCurrentDuration:(double)arg1 ;
-(void)setCustomDuration:(double)arg1 andEdit:(BOOL)arg2 ;
-(double)currentDuration;
@end

