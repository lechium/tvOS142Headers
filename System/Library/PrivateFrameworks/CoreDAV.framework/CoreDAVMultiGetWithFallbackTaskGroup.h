/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:13:06 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreDAV/CoreDAVTaskGroup.h>
#import <CoreDAV/CoreDAVContainerMultiGetSubmittable.h>

@class CoreDAVContainerMultiGetTask, NSMutableSet, NSSet, NSError, NSString;

@interface CoreDAVMultiGetWithFallbackTaskGroup : CoreDAVTaskGroup <CoreDAVContainerMultiGetSubmittable> {

	BOOL _shouldIgnoreResponseErrors;
	BOOL _usingMultiGet;
	CoreDAVContainerMultiGetTask* _multiGetTask;
	/*^block*/id _getBlock;
	NSMutableSet* _urls;
	NSMutableSet* _parsedContents;

}

@property (nonatomic,readonly) NSSet * missingURLs; 
@property (nonatomic,readonly) NSSet * deletedURLs; 
@property (nonatomic,readonly) NSSet * parsedContents; 
@property (assign,nonatomic) BOOL shouldIgnoreResponseErrors;                                 //@synthesize shouldIgnoreResponseErrors=_shouldIgnoreResponseErrors - In the implementation block
@property (nonatomic,copy) id completionBlock; 
@property (assign,nonatomic) id<CoreDAVTaskManager> taskManager; 
@property (assign,nonatomic) id<CoreDAVAccountInfoProvider> accountInfoProvider; 
@property (nonatomic,readonly) NSError * error; 
@property (assign,nonatomic) double timeoutInterval; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSError *)error;
-(void)startTaskGroup;
-(NSSet *)missingURLs;
-(NSSet *)deletedURLs;
-(NSSet *)parsedContents;
-(BOOL)shouldIgnoreResponseErrors;
-(void)setShouldIgnoreResponseErrors:(BOOL)arg1 ;
-(void)_fetchOneItem;
-(void)_configureAndSubmitTask:(id)arg1 ;
-(void)_switchToSingleGetMode;
-(id)initWithURLs:(id)arg1 multiGetBlock:(/*^block*/id)arg2 getBlock:(/*^block*/id)arg3 accountInfoProvider:(id)arg4 taskManager:(id)arg5 ;
@end

