/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:19:40 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSXMLParserDelegate.h>

@class NSXMLParser, WPXMLRPCDecoderDelegate, NSData, NSMutableString, NSString;

@interface WPXMLRPCDecoder : NSObject <NSXMLParserDelegate> {

	NSXMLParser* _parser;
	WPXMLRPCDecoderDelegate* _delegate;
	BOOL _isFault;
	NSData* _body;
	NSData* _originalData;
	id _object;
	NSMutableString* _methodName;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isFault;
-(id)initWithData:(id)arg1 ;
-(id)object;
-(id)error;
-(void)parser:(id)arg1 foundCharacters:(id)arg2 ;
-(void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 ;
-(void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5 ;
-(void)parser:(id)arg1 parseErrorOccurred:(id)arg2 ;
-(void)parse;
-(void)abortParsing;
-(long long)faultCode;
-(id)faultString;
@end

