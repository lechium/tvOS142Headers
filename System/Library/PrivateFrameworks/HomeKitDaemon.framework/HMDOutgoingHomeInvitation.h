/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:18:00 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeKitDaemon/HMDHomeInvitation.h>
#import <libobjc.A.dylib/HMDBackingStoreObjectProtocol.h>

@protocol HMFLocking;
@class NSArray, NSUUID, HMDUser, NSString;

@interface HMDOutgoingHomeInvitation : HMDHomeInvitation <HMDBackingStoreObjectProtocol> {

	id<HMFLocking> _lock;
	BOOL _responseReceived;
	NSArray* _operationIdentifiers;
	NSUUID* _uuid;
	HMDUser* _user;
	NSString* _inviteeDestinationAddress;
	NSUUID* _messageIdentifier;

}

@property (nonatomic,retain) NSArray * operationIdentifiers;                           //@synthesize operationIdentifiers=_operationIdentifiers - In the implementation block
@property (nonatomic,retain) NSString * inviteeDestinationAddress;                     //@synthesize inviteeDestinationAddress=_inviteeDestinationAddress - In the implementation block
@property (nonatomic,readonly) NSArray * accessoryInvitationsInformation; 
@property (nonatomic,readonly) NSUUID * uuid;                                          //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,retain) HMDUser * user;                                           //@synthesize user=_user - In the implementation block
@property (nonatomic,readonly) NSArray * operations; 
@property (getter=isComplete,nonatomic,readonly) BOOL complete; 
@property (assign,nonatomic) BOOL responseReceived;                                    //@synthesize responseReceived=_responseReceived - In the implementation block
@property (nonatomic,readonly) NSUUID * messageIdentifier;                             //@synthesize messageIdentifier=_messageIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(NSString *)debugDescription;
-(NSString *)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(HMDUser *)user;
-(BOOL)responseReceived;
-(void)cancel;
-(NSArray *)operations;
-(void)setUser:(HMDUser *)arg1 ;
-(NSUUID *)uuid;
-(BOOL)isComplete;
-(id)shortDescription;
-(NSUUID *)messageIdentifier;
-(void)setResponseReceived:(BOOL)arg1 ;
-(id)modelObjectWithChangeType:(unsigned long long)arg1 version:(long long)arg2 ;
-(void)transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3 ;
-(void)transactionObjectRemoved:(id)arg1 message:(id)arg2 ;
-(void)updateInvitationState:(long long)arg1 ;
-(BOOL)refreshDisplayName;
-(void)notifyStateChangedForMessage:(id)arg1 ;
-(id)describeWithFormat;
-(id)initWithUUID:(id)arg1 invitee:(id)arg2 invitationState:(long long)arg3 forHome:(id)arg4 expiryDate:(id)arg5 messageIdentifier:(id)arg6 ;
-(NSArray *)operationIdentifiers;
-(NSString *)inviteeDestinationAddress;
-(NSArray *)accessoryInvitationsInformation;
-(void)setOperationIdentifiers:(NSArray *)arg1 ;
-(void)_transactionOutgoingInvitiationUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3 ;
-(void)updateUser:(id)arg1 ;
-(void)setInviteeDestinationAddress:(NSString *)arg1 ;
-(void)processUserManagementOperationIdentifiers:(id)arg1 ;
-(void)updateUserManagementOperations:(id)arg1 ;
-(id)emptyModelObjectWithChangeType:(unsigned long long)arg1 ;
-(id)initWithInvitee:(id)arg1 invitationState:(long long)arg2 forHome:(id)arg3 expiryDate:(id)arg4 messageIdentifier:(id)arg5 ;
@end
