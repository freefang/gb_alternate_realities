using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;

using System.Drawing;

namespace SpriteSplitter
{
    class Program
    {
        private static List<Tile> _tiles = new List<Tile>();
        
        static void Main(string[] args)
        {
            /*if (args.Length != 2)
            {
                Console.WriteLine("Usage: SpriteSplitter <file or folder path> <export path>");
                return;
            }

            string path = args[0];
            string exportPath = args[1];

            GatherTileData(path);

            if (_tiles.Count == 0)
            {
                Console.WriteLine("Could not find tile data");
                return;
            }
            
            ReduceTileData();
            ExportTiles(exportPath);*/
        }

        private static void GatherTileData(string path)
        {
            _tiles = new List<Tile>();
            if (File.Exists(path))
            {
                AddTileData(path);
            }
            else if (Directory.Exists(path))
            {
                var filePaths = Directory.GetFiles(path);
                var imageFiles = filePaths.Where(s => s.EndsWith("_scene"));

                foreach (var imagePath in imageFiles)
                {
                    AddTileData(imagePath);
                }
            }
            else
            {
                Console.WriteLine("Path does not exists as file or folder");
            }
        }

        private static void AddTileData(string path)
        {
            //Image.
        }
        
        private static void ReduceTileData()
        {
            
        }

        private static void ExportTiles(string path)
        {
            
        }
    }

    class Tile
    {
        
    }
}