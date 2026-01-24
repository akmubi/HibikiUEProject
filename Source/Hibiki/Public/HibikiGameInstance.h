#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TngGameInstance.h"
#include "HibikiGameInstance.generated.h"

class APlayerController;
class UHbkMasterFadeControl;
class UHbkPSNActivityController;
class UHibikiGameInstance;
class UObject;

UCLASS(Blueprintable, NonTransient)
class HIBIKI_API UHibikiGameInstance : public UTngGameInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UHbkMasterFadeControl> MasterFadeControlClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 NumPlayerWhenGameStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UHbkMasterFadeControl* MasterFadeControl;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UHbkPSNActivityController> PSNActivityControllerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UHbkPSNActivityController* PSNActivityController;
    
public:
    UHibikiGameInstance();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StartLoadingScreen(const FString& MapName, APlayerController* LocalPlayerController);
    
    UFUNCTION(BlueprintCallable)
    void SetPendingReturnToMainMenu(const FText& MessageText);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UHibikiGameInstance* K2_GetHibikiGameInstance(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static FString K2_GetBuildVersionAndDate();
    
    UFUNCTION(BlueprintCallable)
    static FString K2_GetBuildVersion();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EndLoadingScreen();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BeginPlayMasterFade();
    
};

