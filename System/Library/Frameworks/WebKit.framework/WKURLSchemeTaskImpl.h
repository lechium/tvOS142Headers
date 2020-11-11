/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:13:57 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WebKit/WebKit-Structs.h>
#import <libobjc.A.dylib/WKObject.h>
#import <libobjc.A.dylib/WKURLSchemeTaskPrivate.h>

@class WKFrameInfo, NSString, NSURLRequest;

@interface WKURLSchemeTaskImpl : NSObject <WKObject, WKURLSchemeTaskPrivate> {

	ObjectStorage<API::URLSchemeTask> _urlSchemeTask;

}

@property (readonly) Object* _apiObject; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL _requestOnlyIfCached; 
@property (nonatomic,readonly) WKFrameInfo * _frame; 
@property (nonatomic,copy,readonly) NSURLRequest * request; 
-(void)dealloc;
-(WKFrameInfo *)_frame;
-(NSURLRequest *)request;
-(void)didReceiveData:(id)arg1 ;
-(void)didFailWithError:(id)arg1 ;
-(void)didFinish;
-(Object*)_apiObject;
-(void)didReceiveResponse:(id)arg1 ;
-(void)_didPerformRedirection:(id)arg1 newRequest:(id)arg2 ;
-(BOOL)_requestOnlyIfCached;
@end
