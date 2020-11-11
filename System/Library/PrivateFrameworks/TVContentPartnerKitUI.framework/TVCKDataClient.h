/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:21:39 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/TVContentPartnerKitUI.framework/TVContentPartnerKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TVContentPartnerKitUI/TVContentPartnerKitUI-Structs.h>
#import <TVContentPartnerKitUI/TVImageLoader.h>

@class NSString, NSMutableDictionary, TVCKDataServer;

@interface TVCKDataClient : NSObject <TVImageLoader> {

	int _maxConcurrentQueryCount;
	NSString* _name;
	unsigned long long _clientType;
	long long _status;
	NSString* _identifier;
	NSMutableDictionary* _metadataDict;
	TVCKDataServer* _dataServer;

}

@property (assign,nonatomic) unsigned long long clientType;              //@synthesize clientType=_clientType - In the implementation block
@property (assign) long long status;                                     //@synthesize status=_status - In the implementation block
@property (nonatomic,copy) NSString * identifier;                        //@synthesize identifier=_identifier - In the implementation block
@property (retain) NSMutableDictionary * metadataDict;                   //@synthesize metadataDict=_metadataDict - In the implementation block
@property (nonatomic,copy) NSString * name;                              //@synthesize name=_name - In the implementation block
@property (__weak) TVCKDataServer * dataServer;                          //@synthesize dataServer=_dataServer - In the implementation block
@property (assign,nonatomic) int maxConcurrentQueryCount;                //@synthesize maxConcurrentQueryCount=_maxConcurrentQueryCount - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)stringFromClientStatus:(long long)arg1 ;
+(id)stringFromClientType:(unsigned long long)arg1 ;
+(id)mediaItemsForDataItems:(id)arg1 enumerationBlock:(/*^block*/id)arg2 ;
+(id)_stringFromClientTypeHelper:(unsigned long long)arg1 ;
+(id)mediaItemsForDataItems:(id)arg1 ;
-(NSString *)name;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)objectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(long long)status;
-(void)disconnect;
-(void)connect;
-(void)setStatus:(long long)arg1 ;
-(void)setClientType:(unsigned long long)arg1 ;
-(unsigned long long)clientType;
-(NSMutableDictionary *)metadataDict;
-(void)setMetadataDict:(NSMutableDictionary *)arg1 ;
-(void)setClientStatus:(long long)arg1 ;
-(id)imageKeyForObject:(id)arg1 ;
-(void)cancelLoad:(id)arg1 ;
-(id)loadImageForObject:(id)arg1 scaleToSize:(CGSize)arg2 cropToFit:(BOOL)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)initWithName:(id)arg1 clientType:(unsigned long long)arg2 ;
-(void)connectionCompletedWithStatus:(long long)arg1 ;
-(void)queryCompleted:(id)arg1 withStatus:(long long)arg2 ;
-(void)concreteDataClientConnect;
-(void)concreteDataClientDisconnect;
-(void)executeQuery:(id)arg1 withCompletionQueue:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)processQueryAsync:(id)arg1 ;
-(void)submitDataQuery:(id)arg1 priority:(long long)arg2 withCompletionQueue:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)setMaxConcurrentQueryCount:(int)arg1 ;
-(BOOL)canProcessQueryConcurrently:(id)arg1 ;
-(id)mediaItemForDataItem:(id)arg1 ;
-(int)maxConcurrentQueryCount;
-(TVCKDataServer *)dataServer;
-(BOOL)supportsProperty:(id)arg1 ;
-(BOOL)queryFilterSupportsProperty:(id)arg1 ;
-(BOOL)groupingSupportsProperty:(id)arg1 ;
-(void)setDataServer:(TVCKDataServer *)arg1 ;
@end

