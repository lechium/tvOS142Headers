/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:19:20 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/ATVLegacyContentKit.framework/ATVLegacyContentKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <ATVLegacyContentKit/ATVLegacyContentKit-Structs.h>
@class NSMutableSet, TVLLegacyJSContext, NSString, TVLXMLDocument, NSURL;

@interface TVLJSDocumentLoader : NSObject {

	NSMutableSet* _activeImageProxies;
	BOOL _isUsed;
	TVLLegacyJSContext* _context;
	NSString* _functionName;
	TVLXMLDocument* _origXMLDocument;
	TVLXMLDocument* _xmlDocument;
	NSURL* _sourceURL;
	/*^block*/id _jsCallback;

}

@property (nonatomic,retain) TVLLegacyJSContext * context;                  //@synthesize context=_context - In the implementation block
@property (nonatomic,copy) NSString * functionName;                         //@synthesize functionName=_functionName - In the implementation block
@property (nonatomic,retain) TVLXMLDocument * origXMLDocument;              //@synthesize origXMLDocument=_origXMLDocument - In the implementation block
@property (nonatomic,retain) TVLXMLDocument * xmlDocument;                  //@synthesize xmlDocument=_xmlDocument - In the implementation block
@property (nonatomic,copy) NSURL * sourceURL;                               //@synthesize sourceURL=_sourceURL - In the implementation block
@property (nonatomic,copy) id jsCallback;                                   //@synthesize jsCallback=_jsCallback - In the implementation block
@property (assign,nonatomic) BOOL isUsed;                                   //@synthesize isUsed=_isUsed - In the implementation block
+(id)documentLoaderForContext:(OpaqueJSContextRef)arg1 functionName:(id)arg2 argumentCount:(unsigned long long)arg3 arguments:(const OpaqueJSValue*)arg4 exception:(const OpaqueJSValue*)arg5 ;
-(TVLLegacyJSContext *)context;
-(void)setContext:(TVLLegacyJSContext *)arg1 ;
-(NSString *)functionName;
-(NSURL *)sourceURL;
-(void)setSourceURL:(NSURL *)arg1 ;
-(void)setFunctionName:(NSString *)arg1 ;
-(TVLXMLDocument *)xmlDocument;
-(id)initWithContext:(id)arg1 functionName:(id)arg2 xmlDocument:(id)arg3 sourceURL:(id)arg4 jsCallback:(/*^block*/id)arg5 ;
-(void)loadDocumentViewByReusingJSContext:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)loadDocumentByReusingJSContext:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)isUsed;
-(void)setIsUsed:(BOOL)arg1 ;
-(TVLXMLDocument *)origXMLDocument;
-(id)jsCallback;
-(void)setOrigXMLDocument:(TVLXMLDocument *)arg1 ;
-(void)setXmlDocument:(TVLXMLDocument *)arg1 ;
-(void)setJsCallback:(id)arg1 ;
@end
