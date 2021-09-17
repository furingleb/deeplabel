#ifndef CLIPARSER_H
#define CLIPARSER_H

#include <QObject>
#include <QCommandLineParser>
#include <exporter.h>
#include <importer.h>

class CliParser : public QObject
{
    Q_OBJECT
public:
    explicit CliParser(QObject *parent = nullptr);
    bool Run();

private:
    void SetupOptions();
    bool handleExport();
    bool handleImport();

    QCommandLineParser parser;

    QCommandLineOption *exportFormatOption;
    QCommandLineOption *exportOutputFolder;
    QCommandLineOption *exportInputFile;
    QCommandLineOption *exportValidationSplit;
    QCommandLineOption *exportNoSubfolders;
    QCommandLineOption *exportFilePrefix;
    QCommandLineOption *exportNamesFile;
    QCommandLineOption *exportGCPBucket;
    QCommandLineOption *exportGCPLocal;
    QCommandLineOption *exportPascalVOCLabelMap;
    QCommandLineOption *exportShuffleImages;
    QCommandLineOption *exportAppendLabels;
    QCommandLineOption *exportUnlabelledImages;

    QCommandLineOption *importImages;
    QCommandLineOption *importAnnotations;
    QCommandLineOption *importUnlabelledImages;
    QCommandLineOption *importOverwrite;
    QCommandLineOption *importTFRecordMask;

signals:

};

#endif // CLIPARSER_H
