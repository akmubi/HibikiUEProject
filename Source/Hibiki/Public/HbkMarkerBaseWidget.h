#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "HbkUserWidget.h"
#include "Templates/SubclassOf.h"
#include "HbkMarkerBaseWidget.generated.h"

class UHbkGameMarkerObject;
class UHbkMarkerBaseWidget;
class UObject;

UCLASS(Abstract, Blueprintable, EditInlineNew, HideDropdown)
class HIBIKI_API UHbkMarkerBaseWidget : public UHbkUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector TargetOffsetPos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TargetPosScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TargetName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CatalogID;
    
    UHbkMarkerBaseWidget();

    UFUNCTION(BlueprintCallable)
    void RemoveMarker();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool Function_IsFinish();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UHbkMarkerBaseWidget* CreateMarkerFromObject(UObject* WorldContextObject, TSubclassOf<UHbkMarkerBaseWidget> MarkerClass, TSubclassOf<UHbkGameMarkerObject> MarkerObject, UObject* TargetObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UHbkMarkerBaseWidget* CreateMarkerFromLocation(UObject* WorldContextObject, TSubclassOf<UHbkMarkerBaseWidget> MarkerClass, TSubclassOf<UHbkGameMarkerObject> MarkerObject, FVector TargetPosition);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_MarkerConstruct();
    
};

