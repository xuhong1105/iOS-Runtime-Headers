/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Accounts.framework/Accounts
 */

@interface ACAccount : NSObject <NSCopying, NSSecureCoding> {
    BOOL  _accountAccessAvailable;
    NSString * _accountDescription;
    id /* block */  _accountPropertiesTransformer;
    ACAccountType * _accountType;
    BOOL  _active;
    BOOL  _authenticated;
    NSString * _authenticationType;
    NSArray * _childAccounts;
    NSString * _clientToken;
    BOOL  _creatingFromManagedObject;
    ACAccountCredential * _credential;
    NSString * _credentialType;
    id  _credentialsDidChangeObserver;
    NSMutableDictionary * _dataclassProperties;
    NSDate * _date;
    NSMutableSet * _dirtyAccountProperties;
    NSMutableSet * _dirtyDataclassProperties;
    NSMutableSet * _dirtyProperties;
    NSMutableSet * _enabledDataclasses;
    BOOL  _haveCheckedForChildAccounts;
    BOOL  _haveCheckedForClientToken;
    BOOL  _haveCheckedForParentAccount;
    NSString * _identifier;
    NSDate * _lastCredentialRenewalRejectionDate;
    NSURL * _objectID;
    NSString * _owningBundleID;
    ACAccount * _parentAccount;
    NSString * _parentAccountIdentifier;
    NSMutableDictionary * _properties;
    NSMutableSet * _provisionedDataclasses;
    ACAccountStore * _store;
    BOOL  _supportsAuthentication;
    NSString * _username;
    BOOL  _visible;
}

@property (setter=_aa_setRawPassword:, nonatomic, copy) NSString *_aa_rawPassword;
@property (nonatomic, readonly) NSDictionary *aa_accountFirstDisplayAlert;
@property (nonatomic, readonly) NSDictionary *aa_accountFooterButton;
@property (nonatomic, readonly) NSString *aa_accountFooterText;
@property (nonatomic, readonly) NSString *aa_accountTypeString;
@property (nonatomic, readonly) NSString *aa_altDSID;
@property (nonatomic, readonly) NSArray *aa_appleIDAliases;
@property (nonatomic, readonly) NSString *aa_appleId;
@property (setter=aa_setAuthToken:, nonatomic, copy) NSString *aa_authToken;
@property (nonatomic, readonly) ACAccount *aa_childMailAccount;
@property (nonatomic, readonly) ACAccount *aa_cloudKitAccount;
@property (nonatomic, readonly) NSString *aa_displayName;
@property (setter=aa_setFirstName:, nonatomic, copy) NSString *aa_firstName;
@property (nonatomic, readonly) ACAccount *aa_fmfAccount;
@property (nonatomic, readonly) ACAccount *aa_fmipAccount;
@property (nonatomic, readonly) NSString *aa_fmipToken;
@property (nonatomic, readonly) NSString *aa_hsaToken;
@property (setter=aa_setCloudDocsMigrationComplete:, nonatomic) BOOL aa_isCloudDocsMigrationComplete;
@property (nonatomic, readonly) BOOL aa_isManagedAppleID;
@property (nonatomic, readonly) BOOL aa_isNotesMigrated;
@property (setter=aa_setPrimaryAccount:, nonatomic) BOOL aa_isPrimaryAccount;
@property (setter=aa_setPrimaryEmailVerified:, nonatomic) BOOL aa_isPrimaryEmailVerified;
@property (nonatomic, readonly) BOOL aa_isSandboxAccount;
@property (setter=aa_setSyncedAccount:, nonatomic) BOOL aa_isSyncedAccount;
@property (setter=aa_setUndergoingRepair:, nonatomic) BOOL aa_isUndergoingRepair;
@property (setter=aa_setUsesCloudDocs:, nonatomic) BOOL aa_isUsingCloudDocs;
@property (nonatomic, readonly) BOOL aa_isUsingiCloud;
@property (setter=aa_setLastName:, nonatomic, copy) NSString *aa_lastName;
@property (nonatomic, readonly) NSString *aa_mapsToken;
@property (nonatomic, readonly) BOOL aa_needsEmailConfiguration;
@property (nonatomic, readonly) BOOL aa_needsRegistration;
@property (setter=aa_setNeedsToVerifyTerms:, nonatomic) BOOL aa_needsToVerifyTerms;
@property (setter=aa_setPassword:, nonatomic, copy) NSString *aa_password;
@property (nonatomic, readonly) NSString *aa_personID;
@property (nonatomic, readonly) NSString *aa_primaryEmail;
@property (nonatomic, readonly) NSString *aa_protocolVersion;
@property (nonatomic, readonly) int aa_repairerPID;
@property (nonatomic, readonly) BOOL aa_serviceUnavailable;
@property (nonatomic, readonly) NSDictionary *aa_serviceUnavailableInfo;
@property (nonatomic, readonly) NSString *aa_syncStoreIdentifier;
@property (nonatomic, copy) NSString *accountDescription;
@property (nonatomic, readonly) NSDictionary *accountProperties;
@property (copy) id /* block */ accountPropertiesTransformer;
@property (nonatomic, readonly) ACAccountStore *accountStore;
@property (nonatomic, retain) ACAccountType *accountType;
@property (getter=isActive, nonatomic) BOOL active;
@property (getter=isAuthenticated, nonatomic) BOOL authenticated;
@property (nonatomic, readonly) NSString *authenticationType;
@property BOOL calAttachmentDownloadHasTakenPlace;
@property (readonly) NSArray *calCalDAVChildAccounts;
@property (retain) NSString *calCollectionSetName;
@property (readonly) NSURL *calExchangeWebServicesURL;
@property (readonly) NSURL *calExternalExchangeWebServicesURL;
@property (copy) NSURL *calExternalURL;
@property (retain) NSString *calHostname;
@property (copy) NSString *calIdentityEmailAddress;
@property (readonly) BOOL calIsAutoRefreshed;
@property (readonly) BOOL calIsCalDAVAccount;
@property (readonly) BOOL calIsDirty;
@property (readonly) BOOL calIsEnabled;
@property BOOL calIsEnabledForCalendar;
@property BOOL calIsEnabledForReminders;
@property (readonly) BOOL calIsExchangeAccount;
@property (readonly) BOOL calIsGenericCalDAVAccount;
@property (readonly) BOOL calIsMissingParentAccount;
@property BOOL calLocalDataMigrationHasTakenPlace;
@property (copy) NSString *calMainPrincipalUID;
@property (copy) NSNumber *calPort;
@property (readonly, copy) NSDictionary *calPrincipals;
@property BOOL calPushDisabled;
@property int calRefreshInterval;
@property (copy) NSString *calRootFolderID;
@property BOOL calServerSyncHasTakenPlace;
@property (copy) NSURL *calServerURL;
@property BOOL calSkipCredentialVerification;
@property BOOL calUseExternalURL;
@property BOOL calUseKerberos;
@property BOOL calUseSSL;
@property (copy) NSString *calWebServicesRecordGUID;
@property (nonatomic, readonly) NSArray *childAccounts;
@property (nonatomic, readonly) ACAccount *ck_cloudKitAccount;
@property (nonatomic, readonly) NSString *clientToken;
@property (nonatomic, retain) NSDictionary *communicationServiceRules;
@property (nonatomic, retain) NSDate *creationDate;
@property (nonatomic, retain) ACAccountCredential *credential;
@property (nonatomic, readonly) NSString *credentialType;
@property (nonatomic, readonly) NSDictionary *dataclassProperties;
@property (getter=isDirty, nonatomic, readonly) BOOL dirty;
@property (nonatomic, readonly) NSSet *dirtyAccountProperties;
@property (nonatomic, readonly) NSSet *dirtyDataclassProperties;
@property (nonatomic, readonly) NSSet *dirtyProperties;
@property (nonatomic, readonly) ACAccount *displayAccount;
@property (nonatomic, retain) NSMutableSet *enabledDataclasses;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, retain) NSDate *lastCredentialRenewalRejectionDate;
@property (nonatomic, retain) NSString *mcAccountIdentifier;
@property (nonatomic, retain) NSString *mcPayloadUUID;
@property (nonatomic, retain) NSString *mcProfileUUID;
@property (nonatomic, readonly) NSURL *objectID;
@property (nonatomic, retain) ACAccount *parentAccount;
@property (nonatomic, readonly) NSString *parentAccountIdentifier;
@property (nonatomic, retain) NSMutableSet *provisionedDataclasses;
@property (nonatomic, readonly) NSString *shortDebugName;
@property (nonatomic) BOOL supportsAuthentication;
@property (nonatomic, readonly) BOOL supportsPush;
@property (nonatomic, readonly) NSString *userFullName;
@property (nonatomic, copy) NSString *username;
@property (getter=isVisible, nonatomic) BOOL visible;

// Image: /System/Library/Frameworks/Accounts.framework/Accounts

+ (id)_createNewAccountUID;
+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_clearCachedChildAccounts;
- (void)_clearCachedCredentials;
- (void)_clearDirtyProperties;
- (id)_initWithManagedAccount:(id)arg1 accountStore:(id)arg2 withDirtyStateFromAccount:(id)arg3;
- (void)_installCredentialsChangedObserver;
- (void)_loadAllCachedProperties;
- (void)_loadCachedPropertiesWithoutCredentials;
- (void)_markAccountPropertyDirty:(id)arg1;
- (void)_markCredentialDirty;
- (void)_markDataclassPropertyDirty:(id)arg1;
- (void)_markPropertyDirty:(id)arg1;
- (void)_setAccountStore:(id)arg1;
- (void)_setObjectID:(id)arg1;
- (BOOL)_useParentForCredentials;
- (id)accountByCleaningThirdPartyTransformations;
- (id)accountDescription;
- (id)accountProperties;
- (id /* block */)accountPropertiesTransformer;
- (id)accountPropertyForKey:(id)arg1;
- (id)accountStore;
- (id)accountType;
- (BOOL)addClientToken:(id)arg1;
- (BOOL)authenticated;
- (id)authenticationType;
- (id)childAccounts;
- (id)childAccountsWithAccountTypeIdentifier:(id)arg1;
- (id)clientToken;
- (struct __SecIdentity { }*)copySecIdentity;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)creationDate;
- (id)credential;
- (id)credentialType;
- (id)credentialWithError:(id*)arg1;
- (void)credentialsChanged:(id)arg1;
- (id)dataclassProperties;
- (void)dealloc;
- (id)defaultAutodiscoverDomainForChildType:(id)arg1;
- (id)description;
- (id)diffAccount:(id)arg1;
- (id)dirtyAccountProperties;
- (id)dirtyDataclassProperties;
- (id)dirtyProperties;
- (id)displayAccount;
- (id)enabledAndSyncableDataclasses;
- (id)enabledDataclasses;
- (void)encodeWithCoder:(id)arg1;
- (id)fullDescription;
- (id)identifier;
- (id)initWithAccountType:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithManagedAccount:(id)arg1;
- (id)initWithManagedAccount:(id)arg1 accountStore:(id)arg2;
- (BOOL)isActive;
- (BOOL)isAuthenticated;
- (BOOL)isDirty;
- (BOOL)isEnabledForDataclass:(id)arg1;
- (BOOL)isEnabledToSyncDataclass:(id)arg1;
- (BOOL)isPropertyDirty:(id)arg1;
- (BOOL)isProvisionedForDataclass:(id)arg1;
- (BOOL)isVisible;
- (id)lastCredentialRenewalRejectionDate;
- (void)markAllPropertiesDirty;
- (id)objectForKeyedSubscript:(id)arg1;
- (id)objectID;
- (id)owningBundleID;
- (id)parentAccount;
- (id)parentAccountIdentifier;
- (id)propertiesForDataclass:(id)arg1;
- (id)propertyForKey:(id)arg1;
- (id)provisionedDataclasses;
- (id)qualifiedUsername;
- (void)refresh;
- (void)reload;
- (id)secCertificates;
- (void)setAccountDescription:(id)arg1;
- (void)setAccountProperties:(id)arg1;
- (void)setAccountPropertiesTransformer:(id /* block */)arg1;
- (void)setAccountProperty:(id)arg1 forKey:(id)arg2;
- (void)setAccountType:(id)arg1;
- (void)setActive:(BOOL)arg1;
- (void)setAuthenticated:(BOOL)arg1;
- (void)setAuthenticationType:(id)arg1;
- (void)setCreatingFromManagedObject:(BOOL)arg1;
- (void)setCreationDate:(id)arg1;
- (void)setCredential:(id)arg1;
- (void)setCredentialType:(id)arg1;
- (void)setDataclassProperties:(id)arg1;
- (void)setEnabled:(BOOL)arg1 forDataclass:(id)arg2;
- (void)setEnabledDataclasses:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setLastCredentialRenewalRejectionDate:(id)arg1;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (void)setOwningBundleID:(id)arg1;
- (void)setParentAccount:(id)arg1;
- (void)setProperties:(id)arg1 forDataclass:(id)arg2;
- (void)setProperty:(id)arg1 forKey:(id)arg2;
- (void)setProvisionedDataclasses:(id)arg1;
- (void)setSecCertificates:(id)arg1;
- (void)setSecIdentity:(struct __SecIdentity { }*)arg1;
- (void)setSupportsAuthentication:(BOOL)arg1;
- (void)setUsername:(id)arg1;
- (void)setVisible:(BOOL)arg1;
- (id)shortDebugName;
- (BOOL)supportsAuthentication;
- (BOOL)supportsPush;
- (void)takeValuesFromModifiedAccount:(id)arg1;
- (id)userFullName;
- (id)username;

// Image: /System/Library/PrivateFrameworks/AccountsUI.framework/AccountsUI

- (id)displayUsername;

// Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount

+ (id)aa_dataclassesBoundToPrimaryAppleAccount;
+ (id)aa_dataclassesBoundToSingleAppleAccount;

- (void)_aa_clearRawPassword;
- (id)_aa_rawPassword;
- (void)_aa_setAltDSID:(id)arg1;
- (void)_aa_setAppleID:(id)arg1;
- (void)_aa_setRawPassword:(id)arg1;
- (id)_registeredBundles;
- (id)aa_accountFirstDisplayAlert;
- (id)aa_accountFooterButton;
- (id)aa_accountFooterText;
- (id)aa_accountTypeString;
- (id)aa_altDSID;
- (id)aa_appleIDAliases;
- (id)aa_appleId;
- (id)aa_authToken;
- (id)aa_authTokenWithError:(id*)arg1;
- (id)aa_childMailAccount;
- (id)aa_cloudKitAccount;
- (void)aa_configureCerts;
- (id)aa_displayName;
- (id)aa_firstName;
- (id)aa_fmfAccount;
- (id)aa_fmipAccount;
- (id)aa_fmipToken;
- (id)aa_hsaToken;
- (id)aa_hsaTokenWithError:(id*)arg1;
- (BOOL)aa_isCloudDocsMigrationComplete;
- (BOOL)aa_isManagedAppleID;
- (BOOL)aa_isNotesMigrated;
- (BOOL)aa_isPCSErrorTransient:(struct __CFError { }*)arg1;
- (BOOL)aa_isPrimaryAccount;
- (BOOL)aa_isPrimaryEmailVerified;
- (BOOL)aa_isSandboxAccount;
- (BOOL)aa_isSyncedAccount;
- (BOOL)aa_isUndergoingRepair;
- (BOOL)aa_isUsingCloudDocs;
- (BOOL)aa_isUsingiCloud;
- (id)aa_lastName;
- (id)aa_mapsToken;
- (BOOL)aa_needsEmailConfiguration;
- (BOOL)aa_needsPCSRepair;
- (BOOL)aa_needsPCSRepairWithAuthToken:(id)arg1;
- (BOOL)aa_needsRegistration;
- (BOOL)aa_needsToVerifyTerms;
- (id)aa_password;
- (id)aa_personID;
- (id)aa_primaryEmail;
- (id)aa_protocolVersion;
- (void)aa_removeCerts;
- (int)aa_repairerPID;
- (BOOL)aa_serviceUnavailable;
- (id)aa_serviceUnavailableInfo;
- (void)aa_setAuthToken:(id)arg1;
- (void)aa_setCloudDocsMigrationComplete:(BOOL)arg1;
- (void)aa_setFirstName:(id)arg1;
- (void)aa_setHSAToken:(id)arg1;
- (void)aa_setLastName:(id)arg1;
- (void)aa_setMapsToken:(id)arg1;
- (void)aa_setNeedsToVerifyTerms:(BOOL)arg1;
- (void)aa_setPassword:(id)arg1;
- (void)aa_setPrimaryAccount:(BOOL)arg1;
- (void)aa_setPrimaryEmailVerified:(BOOL)arg1;
- (void)aa_setSyncedAccount:(BOOL)arg1;
- (void)aa_setUndergoingRepair:(BOOL)arg1;
- (void)aa_setUseCellular:(BOOL)arg1 forDataclass:(id)arg2;
- (void)aa_setUsesCloudDocs:(BOOL)arg1;
- (id)aa_syncStoreIdentifier;
- (void)aa_updateWithProvisioningResponse:(id)arg1;
- (BOOL)aa_useCellularForDataclass:(id)arg1;
- (id)appleID;
- (BOOL)canRemoveAccount;
- (id)dsid;
- (id)initWithAppleID:(id)arg1 password:(id)arg2;
- (int)mobileMeAccountStatus;
- (void)setDSID:(id)arg1;
- (void)storeOriginalUsername;

// Image: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI

- (id)aaui_compositeName;
- (int)aaui_compositeNameFormat;
- (BOOL)aaui_isRestrictedForDataclass:(id)arg1;

// Image: /System/Library/PrivateFrameworks/AppleIDSSOAuthentication.framework/AppleIDSSOAuthentication

- (id)aida_alternateDSID;
- (id)aida_deviceProvisioningInfo;
- (id)aida_dsid;
- (id)aida_tokenForService:(id)arg1;
- (id)aida_tokenWithExpirationCheck;
- (id)aida_tokenWithExpiryCheckForService:(id)arg1;

// Image: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation

- (id)_accountPropertiesKeys;
- (id)_calDAVDataclassProperties;
- (id)_createExchangeWebServicesURLFromURL:(id)arg1;
- (BOOL)_dataclassIsEnabled:(id)arg1;
- (id)_diffAccountPropertiesWithAccount:(id)arg1 firstPropertyOnly:(BOOL)arg2;
- (id)_diffPropertiesWithAccount:(id)arg1 firstPropertyOnly:(BOOL)arg2;
- (id)_diffWithAccount:(id)arg1 firstPropertyOnly:(BOOL)arg2;
- (id)_schemeStringForUseSSL:(BOOL)arg1;
- (void)_setCalInternalValue:(id)arg1 forAccountPropertyKey:(id)arg2;
- (void)_setIsEnabled:(BOOL)arg1 forDataclass:(id)arg2;
- (id)_updateURL:(id)arg1 withHost:(id)arg2 port:(id)arg3 useSSL:(id)arg4;
- (BOOL)_useSSLForSchemeString:(id)arg1;
- (void)addPrincipal:(id)arg1 withUID:(id)arg2;
- (BOOL)calAttachmentDownloadHasTakenPlace;
- (id)calCalDAVChildAccounts;
- (id)calCollectionSetName;
- (id)calExchangeWebServicesURL;
- (id)calExternalExchangeWebServicesURL;
- (id)calExternalURL;
- (id)calHostname;
- (id)calIdentityEmailAddress;
- (BOOL)calIsAutoRefreshed;
- (BOOL)calIsCalDAVAccount;
- (BOOL)calIsDirty;
- (BOOL)calIsEnabled;
- (BOOL)calIsEnabledForCalendar;
- (BOOL)calIsEnabledForReminders;
- (BOOL)calIsExchangeAccount;
- (BOOL)calIsGenericCalDAVAccount;
- (BOOL)calIsMissingParentAccount;
- (BOOL)calLocalDataMigrationHasTakenPlace;
- (id)calMainPrincipalUID;
- (id)calPort;
- (id)calPrincipalURLForMainPrincipal;
- (id)calPrincipalURLForPrincipalWithUID:(id)arg1;
- (id)calPrincipals;
- (BOOL)calPushDisabled;
- (int)calRefreshInterval;
- (id)calRootFolderID;
- (BOOL)calServerSyncHasTakenPlace;
- (id)calServerURL;
- (BOOL)calSkipCredentialVerification;
- (BOOL)calUseExternalURL;
- (BOOL)calUseKerberos;
- (BOOL)calUseSSL;
- (id)calWebServicesRecordGUID;
- (void)createDictionaryForPrincipalWithUID:(id)arg1;
- (id)diffWithAccount:(id)arg1;
- (id)firstDifferentPropertyWithAccount:(id)arg1;
- (void)removeAccountPropertyForKey:(id)arg1;
- (BOOL)removePrincipalWithUID:(id)arg1;
- (void)setCalAttachmentDownloadHasTakenPlace:(BOOL)arg1;
- (void)setCalCollectionSetName:(id)arg1;
- (void)setCalExternalURL:(id)arg1;
- (void)setCalHostname:(id)arg1;
- (void)setCalIdentityEmailAddress:(id)arg1;
- (void)setCalIsEnabledForCalendar:(BOOL)arg1;
- (void)setCalIsEnabledForReminders:(BOOL)arg1;
- (void)setCalLocalDataMigrationHasTakenPlace:(BOOL)arg1;
- (void)setCalMainPrincipalUID:(id)arg1;
- (void)setCalPort:(id)arg1;
- (void)setCalPrincipals:(id)arg1;
- (void)setCalPushDisabled:(BOOL)arg1;
- (void)setCalRefreshInterval:(int)arg1;
- (void)setCalRootFolderID:(id)arg1;
- (void)setCalServerSyncHasTakenPlace:(BOOL)arg1;
- (void)setCalServerURL:(id)arg1;
- (void)setCalSkipCredentialVerification:(BOOL)arg1;
- (void)setCalUseExternalURL:(BOOL)arg1;
- (void)setCalUseKerberos:(BOOL)arg1;
- (void)setCalUseSSL:(BOOL)arg1;
- (void)setCalWebServicesRecordGUID:(id)arg1;
- (BOOL)setValue:(id)arg1 forKey:(id)arg2 forPrincipalWithUID:(id)arg3;
- (id)valueForAccountPropertyKey:(id)arg1;
- (id)valueForKey:(id)arg1 forPrincipalWithUID:(id)arg2;

// Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon

- (id)br_displayName;
- (id)br_dsid;
- (id)br_firstName;
- (BOOL)br_isCloudDocsMigrated;
- (BOOL)br_isCloudDocsMigrationComplete;
- (BOOL)br_isEnabledForCloudDocs;
- (BOOL)br_isEnabledForDesktopSync;
- (BOOL)br_isEnabledForUbiquity;
- (BOOL)br_isEnabledForiCloudDesktop;
- (BOOL)br_isManagedAppleID;
- (BOOL)br_isPrimaryAccount;
- (BOOL)br_isPrimaryiCloudAccount;
- (BOOL)br_isiCloudAccount;
- (id)br_lastName;
- (void)br_setCloudDocsMigrated:(BOOL)arg1;
- (void)br_setCloudDocsMigrationComplete:(BOOL)arg1;
- (void)br_setEnabledForiCloudDesktop:(BOOL)arg1;

// Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon

- (id)ck_cloudKitAccount;

// Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation

- (id)_gkCredentialForEnvironment:(int)arg1;
- (id)_gkCredentials;
- (id)_gkCredentialsForEnvironment:(int)arg1;
- (BOOL)_gkIsPrimaryForEnvironment:(int)arg1;
- (id)_gkModifiedDateForProperty:(id)arg1 environment:(int)arg2;
- (id)_gkPerEnvironmentTokens;
- (id)_gkPlayerInternal;
- (id)_gkPropertyForKey:(id)arg1 environment:(int)arg2;
- (void)_gkSetPlayerInternal:(id)arg1;
- (void)_gkSetProperty:(id)arg1 forKey:(id)arg2 environment:(int)arg3;
- (void)_gkSetToken:(id)arg1 forEnvironment:(int)arg2;
- (id)_gkTokenForEnvironment:(int)arg1;

// Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration

- (BOOL)MCIsManaged;
- (id)communicationServiceRules;
- (id)mcAccountIdentifier;
- (id)mcBackingPayload;
- (id)mcBackingProfile;
- (id)mcPayloadUUID;
- (id)mcProfileUUID;
- (void)setCommunicationServiceRules:(id)arg1;
- (void)setMcAccountIdentifier:(id)arg1;
- (void)setMcPayloadUUID:(id)arg1;
- (void)setMcProfileUUID:(id)arg1;

// Image: /System/Library/PrivateFrameworks/MobileSync.framework/MobileSync

- (id)_usernameFromProperties:(id)arg1;
- (void)applySyncProperties:(id)arg1;
- (BOOL)isMobileMeAccount;
- (void)setPasswordFromSync:(id)arg1;
- (id)syncIdentityString;

// Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared

- (BOOL)ic_hasICloudEmailAddress;
- (BOOL)ic_isManagedAppleID;
- (BOOL)ic_isNotesMigrated;
- (BOOL)ic_isPrimaryAppleAccount;
- (BOOL)ic_supportsHTMLNotes;

@end
