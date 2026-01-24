#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "TngGameSystem.generated.h"

class UCanvas;
class UTngGameInstance;

UCLASS(Abstract, Blueprintable, HideDropdown)
class HIBIKI_API UTngGameSystem : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowPausedUpdate;
    
public:
    UTngGameSystem();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTngGameInstance* GetOwnerGameInstance() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_StartToLeaveMap();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_Shutdown();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_PreWorldInitialization();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_PreUpdate(float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_PostUpdate(float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_PostInitialization();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_Initialization();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_DisplayDebug(UCanvas* Canvas);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_BeginPlay();
    
};

