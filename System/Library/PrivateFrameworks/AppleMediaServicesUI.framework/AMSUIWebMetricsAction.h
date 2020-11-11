/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:19:54 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/AppleMediaServicesUI.framework/AppleMediaServicesUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/AMSUIWebActionRunnable.h>

@class AMSUIWebClientContext, NSArray, NSString;

@interface AMSUIWebMetricsAction : NSObject <AMSUIWebActionRunnable> {

	BOOL _shouldFlush;
	AMSUIWebClientContext* _context;
	NSArray* _events;

}

@property (nonatomic,retain) AMSUIWebClientContext * context;              //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) NSArray * events;                             //@synthesize events=_events - In the implementation block
@property (assign,nonatomic) BOOL shouldFlush;                             //@synthesize shouldFlush=_shouldFlush - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(AMSUIWebClientContext *)context;
-(void)setContext:(AMSUIWebClientContext *)arg1 ;
-(void)setEvents:(NSArray *)arg1 ;
-(NSArray *)events;
-(BOOL)shouldFlush;
-(id)initWithJSObject:(id)arg1 context:(id)arg2 ;
-(id)runAction;
-(void)setShouldFlush:(BOOL)arg1 ;
@end

