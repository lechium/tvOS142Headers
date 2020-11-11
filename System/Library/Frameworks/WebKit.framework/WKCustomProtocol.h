/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:13:57 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WebKit/WebKit-Structs.h>
#import <CFNetwork/NSURLProtocol.h>

@interface WKCustomProtocol : NSURLProtocol {

	ObjectIdentifier<WebKit::LegacyCustomProtocolIDType> _customProtocolID;
	RetainPtr<__CFRunLoop *>* _initializationRunLoop;

}

@property (nonatomic,readonly) ObjectIdentifier<WebKit::LegacyCustomProtocolIDType> customProtocolID;              //@synthesize customProtocolID=_customProtocolID - In the implementation block
@property (nonatomic,readonly) CFRunLoopRef initializationRunLoop; 
+(BOOL)canInitWithRequest:(id)arg1 ;
+(id)canonicalRequestForRequest:(id)arg1 ;
+(BOOL)requestIsCacheEquivalent:(id)arg1 toRequest:(id)arg2 ;
-(void)stopLoading;
-(id)initWithRequest:(id)arg1 cachedResponse:(id)arg2 client:(id)arg3 ;
-(void)startLoading;
-(ObjectIdentifier<WebKit::LegacyCustomProtocolIDType>)customProtocolID;
-(CFRunLoopRef)initializationRunLoop;
@end

