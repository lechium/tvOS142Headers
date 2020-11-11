/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:14:23 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/IKAppContextInternalDelegate.h>

@protocol OS_dispatch_queue, IKAppContextDelegate, IKAppCacheDelegate, IKApplication;
@class NSObject, NSURL, NSString, NSArray, IKAppContext;

@interface IKAppCache : NSObject <IKAppContextInternalDelegate> {

	NSObject*<OS_dispatch_queue> _appCacheQueue;
	BOOL _shouldIgnoreHTTPCache;
	id<IKAppContextDelegate> _appContextDelegate;
	id<IKAppCacheDelegate> _delegate;
	NSURL* _currentAppJSURL;
	NSString* _currentAppJSChecksum;
	NSURL* _appLocalJSFileURL;
	NSString* _appLocalJSChecksum;
	NSURL* _appJSFileURL;
	NSString* _appJSChecksum;
	NSArray* _appJSChecksumHistory;
	id<IKApplication> _app;
	unsigned long long _status;
	IKAppContext* _validationContext;
	/*^block*/id _validationCompletionHandler;

}

@property (nonatomic,readonly) NSURL * currentAppJSURL;                                       //@synthesize currentAppJSURL=_currentAppJSURL - In the implementation block
@property (nonatomic,readonly) NSString * currentAppJSChecksum;                               //@synthesize currentAppJSChecksum=_currentAppJSChecksum - In the implementation block
@property (nonatomic,copy,readonly) NSURL * appLocalJSFileURL;                                //@synthesize appLocalJSFileURL=_appLocalJSFileURL - In the implementation block
@property (nonatomic,readonly) NSString * appLocalJSChecksum;                                 //@synthesize appLocalJSChecksum=_appLocalJSChecksum - In the implementation block
@property (nonatomic,copy,readonly) NSURL * appJSFileURL;                                     //@synthesize appJSFileURL=_appJSFileURL - In the implementation block
@property (nonatomic,readonly) NSString * appJSChecksum;                                      //@synthesize appJSChecksum=_appJSChecksum - In the implementation block
@property (nonatomic,readonly) NSArray * appJSChecksumHistory;                                //@synthesize appJSChecksumHistory=_appJSChecksumHistory - In the implementation block
@property (assign,nonatomic,__weak) id<IKApplication> app;                                    //@synthesize app=_app - In the implementation block
@property (nonatomic,readonly) unsigned long long status;                                     //@synthesize status=_status - In the implementation block
@property (nonatomic,readonly) IKAppContext * validationContext;                              //@synthesize validationContext=_validationContext - In the implementation block
@property (nonatomic,copy) id validationCompletionHandler;                                    //@synthesize validationCompletionHandler=_validationCompletionHandler - In the implementation block
@property (assign,nonatomic) BOOL shouldIgnoreHTTPCache;                                      //@synthesize shouldIgnoreHTTPCache=_shouldIgnoreHTTPCache - In the implementation block
@property (assign,nonatomic,__weak) id<IKAppContextDelegate> appContextDelegate;              //@synthesize appContextDelegate=_appContextDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<IKAppCacheDelegate> delegate;                          //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_appContextDelegateSelectors;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(id<IKAppCacheDelegate>)delegate;
-(void)setDelegate:(id<IKAppCacheDelegate>)arg1 ;
-(unsigned long long)status;
-(id)deviceConfigForContext:(id)arg1 ;
-(id)navigationControllerForContext:(id)arg1 ;
-(id)modalControllerForContext:(id)arg1 ;
-(id)tabBarForContext:(id)arg1 ;
-(id<IKApplication>)app;
-(void)appContext:(id)arg1 evaluateAppJavaScriptInContext:(id)arg2 ;
-(void)_loadManifest;
-(void)_performAsync:(/*^block*/id)arg1 ;
-(NSURL *)currentAppJSURL;
-(NSString *)currentAppJSChecksum;
-(NSString *)appLocalJSChecksum;
-(NSString *)appJSChecksum;
-(NSArray *)appJSChecksumHistory;
-(NSURL *)appJSFileURL;
-(void)_checkManifest;
-(NSURL *)appLocalJSFileURL;
-(void)_storeManifest;
-(IKAppContext *)validationContext;
-(id<IKAppContextDelegate>)appContextDelegate;
-(BOOL)shouldIgnoreHTTPCache;
-(id)_validatedChecksumForScript:(id)arg1 error:(id*)arg2 ;
-(id)validationCompletionHandler;
-(void)updateCacheWithValidatedJS:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_cleanupValidationContext;
-(void)setValidationCompletionHandler:(id)arg1 ;
-(BOOL)appContext:(id)arg1 validateDOMDocument:(id)arg2 inContext:(id)arg3 error:(id*)arg4 ;
-(id)objectForPlayer:(id)arg1 ;
-(id)objectForPlaylist:(id)arg1 ;
-(id)objectForMediaItem:(id)arg1 ;
-(void)appContext:(id)arg1 needsReloadWithUrgency:(unsigned long long)arg2 options:(id)arg3 ;
-(id)_cacheFileURLForAppJS:(id)arg1 checksum:(id)arg2 error:(id*)arg3 ;
-(void)appContext:(id)arg1 didFailWithError:(id)arg2 ;
-(void)appContext:(id)arg1 didStopWithOptions:(id)arg2 ;
-(BOOL)shouldForceIgnoreHTTPCacheForAppContext:(id)arg1 ;
-(BOOL)appContext:(id)arg1 shouldStartWithScript:(id)arg2 scriptURL:(id)arg3 loadedFromFallback:(BOOL)arg4 ;
-(void)appContext:(id)arg1 didStartWithOptions:(id)arg2 validatedJSString:(id)arg3 ;
-(id)initWithApplication:(id)arg1 ;
-(BOOL)isOurDispatchQueue;
-(void)appJSURLWithCompletion:(/*^block*/id)arg1 ;
-(void)refreshWithCompletion:(/*^block*/id)arg1 ;
-(void)cleanBlobStorageWithCompletion:(/*^block*/id)arg1 ;
-(void)setShouldIgnoreHTTPCache:(BOOL)arg1 ;
-(void)setAppContextDelegate:(id<IKAppContextDelegate>)arg1 ;
-(void)setApp:(id<IKApplication>)arg1 ;
@end

