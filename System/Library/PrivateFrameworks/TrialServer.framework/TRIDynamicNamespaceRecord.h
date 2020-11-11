/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:21:59 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/TrialServer.framework/TrialServer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TrialServer/TrialServer-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, TRIAppContainer, NSURL;

@interface TRIDynamicNamespaceRecord : NSObject <NSCopying, NSSecureCoding> {

	BOOL _hasFetched;
	int _cloudKitContainer;
	unsigned _compatibilityVersion;
	NSString* _name;
	NSString* _teamId;
	TRIAppContainer* _appContainer;
	NSURL* _defaultsFileURL;

}

@property (nonatomic,readonly) NSString * name;                             //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSString * teamId;                           //@synthesize teamId=_teamId - In the implementation block
@property (nonatomic,readonly) TRIAppContainer * appContainer;              //@synthesize appContainer=_appContainer - In the implementation block
@property (nonatomic,readonly) int cloudKitContainer;                       //@synthesize cloudKitContainer=_cloudKitContainer - In the implementation block
@property (nonatomic,readonly) unsigned compatibilityVersion;               //@synthesize compatibilityVersion=_compatibilityVersion - In the implementation block
@property (nonatomic,readonly) NSURL * defaultsFileURL;                     //@synthesize defaultsFileURL=_defaultsFileURL - In the implementation block
@property (nonatomic,readonly) BOOL hasFetched;                             //@synthesize hasFetched=_hasFetched - In the implementation block
+(void)load;
+(BOOL)supportsSecureCoding;
+(id)dynamicNamespaceRecordWithName:(id)arg1 teamId:(id)arg2 appContainer:(id)arg3 cloudKitContainer:(int)arg4 compatibilityVersion:(unsigned)arg5 defaultsFileURL:(id)arg6 hasFetched:(BOOL)arg7 ;
-(NSString *)name;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned)compatibilityVersion;
-(int)cloudKitContainer;
-(NSString *)teamId;
-(id)copyWithReplacementCompatibilityVersion:(unsigned)arg1 ;
-(TRIAppContainer *)appContainer;
-(id)copyWithReplacementName:(id)arg1 ;
-(id)initWithName:(id)arg1 teamId:(id)arg2 appContainer:(id)arg3 cloudKitContainer:(int)arg4 compatibilityVersion:(unsigned)arg5 defaultsFileURL:(id)arg6 hasFetched:(BOOL)arg7 ;
-(NSURL *)defaultsFileURL;
-(BOOL)hasFetched;
-(BOOL)isEqualToDynamicNamespaceRecord:(id)arg1 ;
-(id)copyWithReplacementTeamId:(id)arg1 ;
-(id)copyWithReplacementAppContainer:(id)arg1 ;
-(id)copyWithReplacementCloudKitContainer:(int)arg1 ;
-(id)copyWithReplacementDefaultsFileURL:(id)arg1 ;
-(id)copyWithReplacementHasFetched:(BOOL)arg1 ;
-(void)_swizzledEncodeWithCoder:(id)arg1 ;
@end

