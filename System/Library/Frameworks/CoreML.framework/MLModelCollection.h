/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:13:40 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSDictionary, TRIClient;

@interface MLModelCollection : NSObject {

	NSString* _identifier;
	NSDictionary* _entries;
	NSString* _deploymentID;
	NSString* _namespaceName;
	TRIClient* _trialClient;

}

@property (nonatomic,copy) NSDictionary * entries;                      //@synthesize entries=_entries - In the implementation block
@property (nonatomic,copy) NSString * deploymentID;                     //@synthesize deploymentID=_deploymentID - In the implementation block
@property (nonatomic,readonly) NSString * namespaceName;                //@synthesize namespaceName=_namespaceName - In the implementation block
@property (nonatomic,readonly) TRIClient * trialClient;                 //@synthesize trialClient=_trialClient - In the implementation block
@property (nonatomic,copy,readonly) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
+(Class)getTrialDownloadOptionsClass;
+(Class)getTrialClientClass;
+(id)_namespaceNameFromCollectionIdentifier:(id)arg1 ;
+(id)beginAccessingModelCollectionWithIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
+(void)endAccessingModelCollectionWithIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
+(Class)getTrialFactorLevelClass;
+(Class)getTrialLevelClass;
+(Class)getTrialFileClass;
+(Class)getTrialFactorClass;
-(NSString *)identifier;
-(NSDictionary *)entries;
-(id)initWithIdentifier:(id)arg1 ;
-(void)setEntries:(NSDictionary *)arg1 ;
-(id)_downloadOptions;
-(BOOL)_register;
-(BOOL)_downloadWithProgress:(/*^block*/id)arg1 ;
-(void)_registerForUpdates;
-(BOOL)_endAccess;
-(void)_handleTrialUpdateForNamespaceName:(id)arg1 ;
-(void)_setDeploymentID;
-(void)_populateEntries;
-(NSString *)deploymentID;
-(void)setDeploymentID:(NSString *)arg1 ;
-(NSString *)namespaceName;
-(TRIClient *)trialClient;
@end

