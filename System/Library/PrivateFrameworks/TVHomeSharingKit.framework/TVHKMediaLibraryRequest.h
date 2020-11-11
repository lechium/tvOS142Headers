/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:21:42 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/TVHomeSharingKit.framework/TVHomeSharingKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <TVHomeSharingKit/TVHomeSharingKit-Structs.h>
@class NSUUID, NSString, TVHKFairPlaySAPContext, NSData, NSMutableDictionary;

@interface TVHKMediaLibraryRequest : NSObject {

	unsigned _sessionID;
	unsigned _clientSharingProtocolVersion;
	NSUUID* _identifier;
	unsigned long long _accessMode;
	NSString* _homeSharingGroupIdentifier;
	NSString* _URLPath;
	NSString* _URLPathDescription;
	unsigned long long _requestType;
	unsigned long long _protocol;
	TVHKFairPlaySAPContext* _fairPlaySAPContext;
	NSString* _method;
	NSData* _body;
	double _timeoutInterval;
	NSMutableDictionary* _headers;
	NSMutableDictionary* _arguments;

}

@property (nonatomic,readonly) BOOL tvhk_returnedImageWillBeCroppedToFit; 
@property (nonatomic,copy) NSString * URLPath;                                          //@synthesize URLPath=_URLPath - In the implementation block
@property (assign,nonatomic) unsigned long long protocol;                               //@synthesize protocol=_protocol - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * headers;                             //@synthesize headers=_headers - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * arguments;                           //@synthesize arguments=_arguments - In the implementation block
@property (nonatomic,copy,readonly) NSUUID * identifier;                                //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) unsigned long long accessMode;                           //@synthesize accessMode=_accessMode - In the implementation block
@property (nonatomic,copy,readonly) NSString * homeSharingGroupIdentifier;              //@synthesize homeSharingGroupIdentifier=_homeSharingGroupIdentifier - In the implementation block
@property (nonatomic,copy) NSString * URLPathDescription;                               //@synthesize URLPathDescription=_URLPathDescription - In the implementation block
@property (nonatomic,readonly) unsigned long long requestType;                          //@synthesize requestType=_requestType - In the implementation block
@property (assign,nonatomic) unsigned sessionID;                                        //@synthesize sessionID=_sessionID - In the implementation block
@property (assign,nonatomic) unsigned clientSharingProtocolVersion;                     //@synthesize clientSharingProtocolVersion=_clientSharingProtocolVersion - In the implementation block
@property (nonatomic,retain) TVHKFairPlaySAPContext * fairPlaySAPContext;               //@synthesize fairPlaySAPContext=_fairPlaySAPContext - In the implementation block
@property (nonatomic,copy) NSString * method;                                           //@synthesize method=_method - In the implementation block
@property (nonatomic,copy) NSData * body;                                               //@synthesize body=_body - In the implementation block
@property (assign,nonatomic) double timeoutInterval;                                    //@synthesize timeoutInterval=_timeoutInterval - In the implementation block
@property (nonatomic,copy,readonly) NSString * logSafeDescription; 
+(id)new;
+(id)tvhk_imageRequestWithMediaEntityImageLoadParams:(id)arg1 scaleToSize:(CGSize)arg2 cropToFit:(BOOL)arg3 sessionState:(id)arg4 ;
+(id)_tvhk_DAAPImageRequestWithMediaEntityImageLoadParams:(id)arg1 sessionState:(id)arg2 ;
+(id)_tvhk_DPAPImageRequestWithMediaEntityImageLoadParams:(id)arg1 sessionState:(id)arg2 ;
+(void)_tvhk_setScalingArgumentsForRequest:(id)arg1 mediaEntityImageLoadParams:(id)arg2 scaleToSize:(CGSize)arg3 cropToFit:(BOOL)arg4 ;
+(BOOL)_tvhk_imageRequestCropToFitWithMediaEntityImageLoadParams:(id)arg1 cropToFit:(BOOL)arg2 ;
+(CGSize)_tvhk_imageRequestScaleToSizeWithScaleToSize:(CGSize)arg1 ;
+(id)_tvhk_DAAPItemImageRequestWithMediaEntityImageLoadParams:(id)arg1 sessionState:(id)arg2 ;
+(id)_tvhk_DAAPCollectionImageRequestWithMediaEntityImageLoadParams:(id)arg1 sessionState:(id)arg2 ;
+(id)_tvhk_DAAPGroupsArtworkRequestActionWithMediaEntityImageLoadParams:(id)arg1 databaseID:(unsigned long long)arg2 ;
+(id)tvhk_imageRequestWithMediaEntity:(id)arg1 imageType:(unsigned long long)arg2 scaleToSize:(CGSize)arg3 cropToFit:(BOOL)arg4 sessionState:(id)arg5 ;
+(id)_defaultFullAccessModeHeaders;
+(id)_defaultViewerOnlyAccessModeHeaders;
+(void)_addCommonHeaders:(id)arg1 ;
-(id)description;
-(id)init;
-(NSUUID *)identifier;
-(unsigned long long)protocol;
-(NSString *)method;
-(unsigned)sessionID;
-(void)setSessionID:(unsigned)arg1 ;
-(double)timeoutInterval;
-(void)setTimeoutInterval:(double)arg1 ;
-(NSMutableDictionary *)arguments;
-(void)setArguments:(NSMutableDictionary *)arg1 ;
-(void)setProtocol:(unsigned long long)arg1 ;
-(void)setBody:(NSData *)arg1 ;
-(NSData *)body;
-(unsigned long long)requestType;
-(void)setMethod:(NSString *)arg1 ;
-(NSMutableDictionary *)headers;
-(void)setHeaders:(NSMutableDictionary *)arg1 ;
-(void)setValue:(id)arg1 forHeaderField:(id)arg2 ;
-(void)setValue:(id)arg1 forArgument:(id)arg2 ;
-(id)initWithSessionState:(id)arg1 URLPath:(id)arg2 requestType:(unsigned long long)arg3 protocol:(unsigned long long)arg4 ;
-(id)argumentValueForName:(id)arg1 ;
-(BOOL)tvhk_returnedImageWillBeCroppedToFit;
-(NSString *)homeSharingGroupIdentifier;
-(TVHKFairPlaySAPContext *)fairPlaySAPContext;
-(void)setURLPathDescription:(NSString *)arg1 ;
-(unsigned long long)accessMode;
-(id)URLRequestWithBaseURL:(id)arg1 ;
-(id)initWithURLPath:(id)arg1 requestType:(unsigned long long)arg2 protocol:(unsigned long long)arg3 accessMode:(unsigned long long)arg4 homeSharingGroupIdentifier:(id)arg5 ;
-(unsigned)clientSharingProtocolVersion;
-(void)setClientSharingProtocolVersion:(unsigned)arg1 ;
-(id)_unsignedURLPathString;
-(void)_addProtcolHeaders:(id)arg1 ;
-(NSString *)URLPath;
-(NSString *)URLPathDescription;
-(id)headerValueForField:(id)arg1 ;
-(id)URLWithBaseURL:(id)arg1 ;
-(NSString *)logSafeDescription;
-(void)setURLPath:(NSString *)arg1 ;
-(void)setFairPlaySAPContext:(TVHKFairPlaySAPContext *)arg1 ;
@end

