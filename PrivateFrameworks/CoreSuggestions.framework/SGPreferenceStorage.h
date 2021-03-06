/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
 */

@interface SGPreferenceStorage : NSObject

+ (BOOL)allowAgeBasedPruning;
+ (BOOL)allowGeocode;
+ (BOOL)alwaysShowCancelledEvents;
+ (id)defaults;
+ (id)defaultsForTests;
+ (BOOL)detectContacts;
+ (BOOL)detectNLEvents;
+ (BOOL)detectStructuredEvents;
+ (int)messagesToProcessImmediately;
+ (BOOL)onlyShowSignificantPseudoContacts;
+ (void)registerBlockOnSuggestionsSettingsChange:(id /* block */)arg1;
+ (void)removeDeprecatedDefaults;
+ (void)resetAllPreferences;
+ (void)setAllowAgeBasedPruning:(BOOL)arg1;
+ (void)setAllowGeocode:(BOOL)arg1;
+ (void)setAllowGeocodeForTests:(BOOL)arg1;
+ (void)setAlwaysShowCancelledEvents:(BOOL)arg1;
+ (void)setContactsDetectionEnabledForTests:(BOOL)arg1;
+ (void)setDetectContacts:(BOOL)arg1;
+ (void)setDetectNLEvents:(BOOL)arg1;
+ (void)setDetectStructuredEvents:(BOOL)arg1;
+ (void)setFirstPartyCalendarAppIsInstalled:(BOOL)arg1;
+ (void)setFirstPartyMailAppIsInstalled:(BOOL)arg1;
+ (void)setHidePastEventsForTests:(BOOL)arg1;
+ (void)setMessagesToProcessImmediately:(int)arg1;
+ (void)setMessagesToProcessImmediatelyForTests:(int)arg1;
+ (void)setNLEventsDetectionEnabledForTests:(BOOL)arg1;
+ (void)setOnlyShowSignificantPseudoContacts:(BOOL)arg1;
+ (void)setProactiveEnabledForTests:(BOOL)arg1;
+ (void)setShowCancelledEventsForTests:(BOOL)arg1;
+ (void)setShowContactsFoundInMail:(BOOL)arg1;
+ (void)setShowContactsFoundInMailForTests:(BOOL)arg1;
+ (void)setShowEventsFoundInMail:(BOOL)arg1;
+ (void)setShowEventsFoundInMailForTests:(BOOL)arg1;
+ (void)setShowPastEvents:(BOOL)arg1;
+ (void)setStructuredEventsDetectionEnabledForTests:(BOOL)arg1;
+ (void)setSyncHistoryToCloud:(BOOL)arg1;
+ (void)setSyncHistoryToCloudForTests:(BOOL)arg1;
+ (BOOL)shouldHarvestEvents;
+ (BOOL)showContactsFoundInMail;
+ (BOOL)showEventsFoundInMail;
+ (BOOL)showPastEvents;
+ (BOOL)showSuggestionsCalendar;
+ (int)suggestionsLogLevel;
+ (BOOL)syncHistoryToCloud;
+ (void)updateBoolSettingKey:(id)arg1 withValue:(BOOL)arg2;

@end
